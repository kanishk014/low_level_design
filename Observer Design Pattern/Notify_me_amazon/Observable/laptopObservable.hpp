#pragma once
#include "StockObservableInterface.hpp"
#include <string>

class LaptopObservable : public StockObservableInterface
{
public:
  std::set<NotificationAlertObserver *> subscribers;
  int stockCount;
  std::string category;

  LaptopObservable()
  {
    stockCount = 0;
    category = "laptop";
  }

  void add(NotificationAlertObserver *observer)
  {
    subscribers.insert(observer);
  }

  void remove(NotificationAlertObserver *observer)
  {
    subscribers.erase(observer);
  }

  void notifySubscribers()
  {
    for (auto subcriber : subscribers)
    {
      subcriber->update();
    }
  }

  void setStockCount(int quantity)
  {
    if (stockCount == 0)
    {
      notifySubscribers();
      stockCount = stockCount + quantity;
    }
    else
    {
      stockCount = stockCount + quantity;
    }
  }

  int getStockCount()
  {
    return stockCount;
  }
};
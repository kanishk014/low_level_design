#pragma once
#include "StockObservableInterface.hpp"

class IphoneObservable : public StockObservableInterface
{
public:
  std::set<NotificationAlertObserver *> subscribers;
  int stockCount;
  std::string category;

  IphoneObservable()
  {
    stockCount = 0;
    category = "iphone";
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
#pragma once
#include "../Observer/NotificationAlertObserver.hpp"
#include <set>

class StockObservableInterface {
  public:  
  virtual void add(NotificationAlertObserver*) = 0;
  virtual void remove(NotificationAlertObserver*) = 0;
  virtual void notifySubscribers() = 0;
  virtual void setStockCount(int) = 0;
  virtual int getStockCount() = 0;
};
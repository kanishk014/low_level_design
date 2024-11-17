#pragma once
#include "NotificationAlertObserver.hpp"

class MobileAlertObserver : public NotificationAlertObserver
{
public:
  std::string username;
  StockObservableInterface *observable;

  MobileAlertObserver(std::string username, StockObservableInterface *observable)
  {
    this->username = username;
    this->observable = observable;
  }

  void update()
  {
    std::cout << username << " updated." << std::endl;
  }
};
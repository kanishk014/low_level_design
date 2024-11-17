#pragma once
#include "NotificationAlertObserver.hpp"

class EmailAlertObserver : public NotificationAlertObserver
{
public:
  std::string email;
  StockObservableInterface *observable;

  EmailAlertObserver(std::string email, StockObservableInterface *observable)
  {
    this->email = email;
    this->observable = observable;
  }

  void update()
  {
    std::cout << email << " has been sent to this email." << std::endl;
  }
};
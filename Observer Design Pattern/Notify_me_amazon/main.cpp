#include <iostream>
#include "./Observable/StockObservableInterface.hpp"
#include "./Observable/IphoneObservable.hpp"
#include "./Observable/LaptopObservable.hpp"
#include "./Observer/EmailAlertObserver.hpp"
#include "./Observer/MobileAlertObserver.hpp"

using namespace std;

int main()
{
  StockObservableInterface *iphoneObservable = new IphoneObservable();
  StockObservableInterface *laptopObservable = new LaptopObservable();

  NotificationAlertObserver *observer1 = new EmailAlertObserver("abc@gmail.com", iphoneObservable);
  NotificationAlertObserver *observer2 = new MobileAlertObserver("1234567890", iphoneObservable);
  NotificationAlertObserver *observer3 = new EmailAlertObserver("def@gmail.com", iphoneObservable);

  iphoneObservable->add(observer1);
  iphoneObservable->add(observer2);
  iphoneObservable->add(observer3);
  laptopObservable->add(observer1);

  iphoneObservable->setStockCount(10);
  laptopObservable->setStockCount(100);

  return 0;
}
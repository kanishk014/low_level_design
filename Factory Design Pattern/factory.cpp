#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
  virtual void draw() = 0;
};

class Square : public Shape
{
  void draw()
  {
    cout << "I am a Square" << endl;
  }
};

class Rectangle : public Shape
{
  void draw()
  {
    cout << "I am a rectangle" << endl;
  }
};

class ShapeFactory
{
public:
  Shape *getShape(string input)
  {
    if (input == "square")
    {
      return new Square();
    }
    else if (input == "rectangle")
    {
      return new Rectangle();
    }
  }
};

int main()
{
  string input;
  cin >> input;

  ShapeFactory *factoryObj = new ShapeFactory();
  Shape *shape = factoryObj->getShape(input);

  shape->draw();

  return 0;
}
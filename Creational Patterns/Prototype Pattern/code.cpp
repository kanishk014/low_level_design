#include <bits/stdc++.h>
using namespace std;

class PrototypeInterface
{
  virtual PrototypeInterface *clone() = 0;
};

class Student : PrototypeInterface
{
public:
  string name;
  int age;
  int roll;

public:
  Student(string _name, int _age, int _roll)
  {
    name = _name;
    age = _age;
    roll = _roll;
  }

  PrototypeInterface *clone()
  {
    return new Student(name, age, roll);
  }
};

int main()
{
  Student *student1 = new Student("Kanishk", 24, 23343);
  Student *student2 = (Student *)(student1->clone());
  student2->name = "Kanishk2";

  cout << student1->name << endl;
  cout << student2->name << endl;

  return 0;
}
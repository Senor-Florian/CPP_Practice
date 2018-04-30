#include <iostream>
#include <ctime>
using namespace std;

struct Cars {
  string make;
  string model;
  int horsePower;
};

int main() {
   int number = 69;
   int *ip;
   ip = &number;
   Cars car;

   // Original variable
   cout << number << endl;
   //Address of variable
   cout << ip << endl;
   //Accessing the value through the pointer
   cout << *ip << endl;

  int number2 = 42;
  int& ref = number2;

  //Original variable
  cout << number2 << endl;
  //Accessing the value through the reference
  cout << ref << endl;

  //IO operations
  string name;
  int age;
  cout << "Please enter your name and age: " << endl;
  cin >> name >> age;
  cout << "Your name is " << name << " and your age is " << age << endl;

  string make;
  string model;
  int horsePower;

  //Car setup
  cout << "Create your car (make, model, horse power): " << endl;
  cin >> make >> model >> horsePower;
  car.make = make;
  car.model = model;
  car.horsePower = horsePower;
  cout << "Make: " << car.make << ", model: " << car.model << ", horse power: " << car.horsePower << endl;

  return 0;
}
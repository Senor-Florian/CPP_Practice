#include <iostream>
#include "Human.h"
using namespace std;

Human :: Human(string name, int yearOfBirth, bool gender) {
  this->name = name;
  this->yearOfBirth = yearOfBirth;
  this->gender = gender;
  augCount++;
}

void Human :: drink(string beverage) {
  cout << getName() << " is drinking " << beverage << endl;
}

void Human :: eat(string food) {
  cout << getName() << " is eating " << food << endl;
}

string Human :: getName() { return name; }
void Human :: setName(string name) { this->name = name; }
int Human ::getYearOfBirth() { return yearOfBirth; }
void Human :: setYearOfBirth(int yearOfBirth) { this->yearOfBirth = yearOfBirth; }
bool Human :: getGender() { return gender; }
void Human :: setGender(int gender) { this->gender = gender; }
int Human :: getAugCount() { return augCount; }
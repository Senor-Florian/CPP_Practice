#include <iostream>
#include "Aug.h"
using namespace std;

Aug :: Aug(string name, int yearOfBirth, bool gender) : Human(name, yearOfBirth, gender), Machine() {}

void Aug :: kill() {
  setKillCount(getKillCount() + 1);
  cout << getName() << " killed an enemy" << endl;
}

void Aug :: sneak() {
  cout << getName() << " sneaked past the enemies" << endl;
}

void Aug :: toString() {
  cout << "name: " << getName() << ", year of birth: " << getYearOfBirth() <<
   ", gender: " << (getGender() ? " male" : "female") << ", kill count: " << getKillCount() << endl;  
}
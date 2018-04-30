#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

static int augCount;

class Human {
  public:
    Human(string name, int yearOfBirth, bool gender);
    void drink(string beverage);
    void eat(string food);
    string getName();
    void setName(string name);
    int getYearOfBirth();
    void setYearOfBirth(int yearOfBirth);
    bool getGender();
    void setGender(int gender);
    int getAugCount();

  private:
    string name;
    int yearOfBirth;
    bool gender;
};

#endif
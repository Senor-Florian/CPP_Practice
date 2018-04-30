#ifndef AUG_H
#define AUG_h
#include <iostream>
#include "Human.h"
#include "Machine.h"
using namespace std;

class Aug: public Human, public Machine {
  public:
    Aug(string name, int yearOfBirth, bool gender);

    void kill();
    void sneak();
    void toString();
};

#endif
#ifndef MACHINE_H
#define MACHINE_H
#include <iostream>
using namespace std;

class Machine {
  public:
    Machine();
    
    void kill();
    void sneak();
    int getKillCount();
    void setKillCount(int killCount);

  private:
    int killCount;
};

#endif
#include <iostream>
#include "Machine.h"
using namespace std;

Machine :: Machine() {
  killCount = 0;
}

void Machine :: kill() {}
void Machine :: sneak() {}

int Machine :: getKillCount() { return killCount; }
void Machine :: setKillCount(int killCount) { this->killCount = killCount; }

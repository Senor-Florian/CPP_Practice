#include <iostream>
#include "Aug.h"
using namespace std;

int main() {
  Aug aug1("Adam Jensen", 1993, true);
  Aug aug2("JC Denton", 2029, true);
  aug1.toString();
  aug2.toString();
  aug1.eat("pizza");
  aug1.sneak();
  aug1.drink("whiskey");
  aug1.kill();
  aug1.kill();
  aug2.drink("vodka");
  aug2.kill();
  aug2.kill();
  aug2.kill();
  aug1.toString();
  aug2.toString();
}
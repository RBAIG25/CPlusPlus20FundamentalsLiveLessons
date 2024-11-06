#include <iostream>
using namespace std;

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH,

};

int main() {
  enum Level myVar1 = LOW;
  enum Level myVar2 = MEDIUM;
  enum Level myVar3 = HIGH;
  cout << myVar1 << " : " << myVar2 << " : " << myVar3;
  return 0;
}

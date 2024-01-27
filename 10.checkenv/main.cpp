#include <iostream>
#ifdef HAS_HELLO
#include "hello.h"
#endif

using namespace std;

int main() {
#ifdef HAS_HELLO
  cout << "has hello" << endl;
#else
  cout << "no hello" << endl;
#endif
  return 0;
}
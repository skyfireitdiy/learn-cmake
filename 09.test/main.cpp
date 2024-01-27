#include "add.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  if (argc == 1) {
    cout << "usage: " << argv[0] << " <NUM1> [NUM2 ...]" << endl;
    return 0;
  }

  if (argc == 2) {
    char *pos;
    cout << strtol(argv[1], &pos, 10) << endl;
    return 0;
  }

  int result = 0;
  for (int i = 1; i < argc; ++i) {
    char *pos;
    result += strtol(argv[i], &pos, 10);
  }
  cout << result << endl;
  return 0;
}
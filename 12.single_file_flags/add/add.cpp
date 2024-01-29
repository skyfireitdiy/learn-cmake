#include "add.h"
#include <iostream>

using namespace std;

int add(int a, int b)
{
    LOG("Begin add");
    int c = a + b;
    LOG("End add");
    return c;
}

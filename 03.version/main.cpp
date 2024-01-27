#include "version.h"
#include <iostream>

using namespace std;

int main(){
    cout << "version info:" << version_VERSION_MAJOR << "." << version_VERSION_MINOR << endl;
    cout << "MYKEY = " << MYKEY << endl;
    return 0;
}
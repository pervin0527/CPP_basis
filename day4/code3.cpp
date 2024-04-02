#include <iostream>
#include "myConstants.h"

using namespace std;

int egv = 777;

void doSomething()
{
    cout << "In code2.cpp " << Constants::pi << &Constants::pi << endl;
}
#include <iostream>

using namespace std;

#define MY_NUMBER 7
#define YOUR_NUMBER

int main()
{
    cout << MY_NUMBER << endl;

    #ifdef YOUR_NUMBER
        cout << 17 << endl;
    #endif

    #ifndef YOUR_NUMBER
        cout << 27 << endl;
    #endif
    
    return 0;
}
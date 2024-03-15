#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    cout << &x << endl; // 0x7ffe14a10de0
    cout << x << endl; // 1

    {
        int x = 10; 
        cout << &x << endl; // 0x7ffe14a10de4
        cout << x << endl; // 10
    }

    cout << &x << endl; // 0x7ffe14a10de0

    {
        x = 7;
        cout << &x << endl; // 0x7ffe14a10de0
        cout << x << endl; // 7
    }

    cout << &x << endl; // 0x7ffe14a10de0
    cout << x << endl; // 7
}
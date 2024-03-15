#include<iostream>

using namespace std;

int doSomething(int x, int y); // forward declaration

int main()
{
    int x = 3;
    int y = 4;
    int result = doSomething(3, 4);
    cout << result << endl;

    return 0;
}

// definition
int doSomething(int x, int y)
{
    return x + y;
}
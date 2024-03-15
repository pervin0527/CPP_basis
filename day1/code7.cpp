#include <iostream>

using namespace std;

namespace mySpace
{
    int function1(int a, int b)
    {
        return a * b;
    }
}

int function1(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 10;
    int y = -3;

    int result_func = function1(x, y);
    int result_space_func = mySpace::function1(x, y);

    cout << result_func << endl;
    cout << result_space_func << endl;
    
    return 0;
}
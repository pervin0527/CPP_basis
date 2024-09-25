#include <iostream>

using namespace std;

int main()
{
    bool b1 = true;
    bool b2 = false;
    bool b3 = true;

    if (!b2) // python : if not b2
    {
        cout << "not b2" << endl;
    }

    if (b1 && b3)
    {
        cout << "AND" << endl;
    }

    if (b1 && !b2)
    {
        cout << "OR" << endl;
    }

    return 0;

}
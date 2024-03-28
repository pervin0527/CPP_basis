#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d1 = (100 - 99.99); // 0.001
    double d2 = (10 - 9.99); // 0.001

    // if (d1 == d2)
    // {
    //     cout << "EQUAL" << endl;
    // }
    // else
    // {
    //     cout << "NOT EQUAL" << endl;
    //     cout << d1 << " " <<  d2 << endl;
    // }

    const double eps = 1e-10;
    if (std::abs(d1 - d2) < eps)
    {
        cout << "거의 같다." << endl;
    }
    else
    {
        cout << "다르다." << endl;
    }
}
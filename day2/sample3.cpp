#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    float f = 3.141592f;
    cout << sizeof(f) << endl;
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<float>::max() << "\n" << endl;

    double d = 3.141592;
    cout << sizeof(d) << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<double>::max() << "\n" << endl;

    long double ld = 3.141592;
    cout << sizeof(ld) << endl;
    cout << numeric_limits<long double>::lowest() << endl;
    cout << numeric_limits<long double>::max() << "\n" << endl;

    float f2 = 1.0f / 3.0f;
    cout << setprecision(20); // 소수점 이하 몇번째 자리까지 표기할 것인가.
    cout << f2 << endl;

    float f3 = 123456789.0f;
    cout << std::setprecision(9);
    cout << f3 << "\n" << endl; // 123456792 실제 값과 다르게 나온다. 어느 정도 오차를 포함하고 있음.


    double d1 = 0.1;
    cout << d1 << endl;
    cout << setprecision(17); // 0.10000000000000001
    cout << d1 << endl;

    double d2 = 1.0;
    double d3 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    cout << d2 << endl; // 0.10000000000000001
    cout << d3 << endl; // 0.99999999999999989

    bool is_same =  d2 == d3;
    cout << is_same << endl; // False
    return 0;
}
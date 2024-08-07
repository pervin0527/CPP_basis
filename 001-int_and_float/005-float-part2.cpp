#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;

int main()
{
    float num0 = 1.0f;
    float num1 = 0.0f;

    cout.precision(64); // 소수점 정밀도
    cout << num0 << " " << num1 << 0.001f << endl;

    for (int i=0; i<1000; i++)
    {
        num1 = num1 + 0.001; // 0.001을 1000번 더하니까 1.0이 될 것이라 예상.
    }

    // 실행되지 못함.
    if (num0 == num1)
        cout << "Equal 0" << endl;

    // 실행되지 못함.
    // epsilon을 사용하는 방식도 부동소수점이 갖는 오차가 많이 누적되게 되면 검증이 제대로 이루어지지 않는다.
    cout << num0 << " " << num1 << endl;
    if (fabs(num0 - num1) <= FLT_EPSILON)
    {
        cout << "Equal 1" << endl;
    }

    float fltMax = FLT_MAX;
    float fltMin = FLT_MIN;
    cout << fltMax << endl;
    cout << fltMin << endl;
}
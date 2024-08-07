#include <iostream>
#include <cmath> 
#include <cfloat>

using namespace std;

int main()
{
    // 실수형 기본
    float num0 = 1.5;
    float num1 = num0 * 1.5;
    float num2 = num0 / 2;
    float num3 = num0 - 3;

    cout << "num0 : " << num0 << endl;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    cout << "num3 : " << num3 << endl;
    cout << " " << endl;

    // float, double, long double 크기 알아보기
    float num4 = 1.0; // 부동소수점 리터럴 상수의 경우 접미사가 없는 경우 기본적으로 double임.
    double num5 = 1.0;
    long double num6 = 1.0;

    cout << "float형 크기 : " << sizeof(num4) << endl;
    cout << "double형 크기 : " << sizeof(num5) << endl;
    cout << "long double형 크기 : " << sizeof(num6) << endl;

    cout << "실수값 리터럴의 타입 : " << typeid(1.0).name() << endl;
    cout << "실수값 리터럴의 타입 : " << typeid(num5).name() << endl;
    cout << " " << endl;

    // 부동소수점을 사용할 때는 반드시 주의해야한다.
    float f1 = 0.1f;
    float f2 = 0.02f * 5.0f;

    cout.precision(64); // 소수점 정밀도
    if (f1 == f2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
        cout << f1 << endl;
        cout << f2 << endl;
    }


    // 리터럴 타입에 따라서도 값이 달라진다.
    cout << " " << endl;
    if (f1 == 0.1)
    {
        cout << "Equal";
    }
    else
    {
        cout << f1 << endl;
        cout << 0.1 << endl;
    }
    cout << " " << endl;

    if (f1 == 0.1L)
    {
        cout << "Equal";
    }
    else
    {
        cout << f1 << endl;
        cout << 0.1 << endl;
    }
    cout << " " << endl;


    // 올바른 비교 방법
    // #include <cmath> 
    // #include <cfloat>

    if (fabs(f1 - f2) <= FLT_EPSILON)
    {
        cout << "EQUAL" << endl;
    }

    return 0;
}
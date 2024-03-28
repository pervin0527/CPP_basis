#include <iostream>

using namespace std;

int main()
{

    cout << 5 / 2 << endl;
    cout << -5 / 2 << endl;

    int x1 = 7;
    int y1 = 4;

    int m1 = x1 / y1;
    int n1 = x1 % y1;

    cout << m1 << " " << n1 << endl;

    double x2 = 7;
    double y2 = 4;

    double m2 = x2 / y2;
    double n2 = x1 % y1; // C++에서는 모듈로 연산자 %를 사용할 때 피연산자가 정수 타입이어야 한다.

    cout << m2 << " " << (double)n2 << endl;

    // 두 개의 피연산자 중 하나라도 실수이면 결과는 실수 타입이 된다.
    cout << x1 / y2 << endl;

    return 0;
}
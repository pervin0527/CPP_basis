#include <iostream>
#include "myConst.h"

using namespace std;

void printNumber(const int number) // 파라미터의 값 변경을 제한함.
{
    // number = 777;
    int n = number;
    cout << n << endl;
}


int main()
{
    float pi1 = 3.141592f; // 3.141592는 Literal 상수.(값을 바꿀 수 없음.)
    const float pi2 = 3.141592f; // symbolic constant. 값을 바꿀 수 없음.

    int x1 = 012; // 8진수(Octal)
    cout << x1 << endl;

    int x2 = 0xF; // 16진수
    cout << x2 << endl;

    const int my_const = 123; // 컴파일 단계에서 상수임을 판단, 고정.
    constexpr int my_const2 = 456;
    
    int number;
    cin >> number;
    const int c_number = number; // number 변수에 값이 저장되었을 때(런타임 단계) c_number의 값을 고정.

    double custom_const1 = constants::pi;
    double custom_const2 = constants::lamb;
    cout << custom_const1 << " " <<  custom_const2 << endl;

    return 0;
}
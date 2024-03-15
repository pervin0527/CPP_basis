#include <iostream>

using namespace std;

void doSomething(int x)
{
    cout << &x << endl; // 0x7ffcc16dc77c
    x = 123;
    cout << x << endl; // 123
}

int main()
{
    int x = 0;
    cout << x << endl; // 0
    cout << &x << endl; // 0x7ffcc16dc794
    doSomething(x); // c++은 함수를 호출할 때 인자 x의 값을 복사해서 전달하기 때문에 원래의 값에 영향을 주지 못한다.
    cout << &x << endl; // 0x7ffcc16dc794
    cout << x << endl; // 0

    return 0;
}
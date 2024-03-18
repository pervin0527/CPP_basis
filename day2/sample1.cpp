#include <iostream>

using namespace std;

int main()
{
    int a1 = 1.23; // copy initialization
    int a2(1.23); // direct initialization
    int a3{1.23}; // uniform initialization
    cout << a1 << endl;
    cout << a2 << endl;

    
    char c1 = 'A';
    int c2 = 65;
    cout << (int)c1 << endl; // 문자는 내부적으로 숫자로 바꿔서 저장하기 때문에 int형으로 변환이 가능하다.
    cout << (char)c2 << endl; // 따라서 반대도 가능.

    bool b = false;
    cout << (b ? 1 : 0) << endl; // 삼항 연산자.
    cout << true << endl; // boolean 타입도 마찬가지로 내부적으로는 숫자로 저장한다.
    cout << (bool)1 << endl;

    float f1 = 3.141592;
    double d1 = 3.141592;
    cout << f1 << endl;
    cout << sizeof(f1) << endl;
    cout << d1 << endl;
    cout << sizeof(d1) << endl;

    return 0;
}
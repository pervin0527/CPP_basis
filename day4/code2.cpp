#include <iostream>
#include "myConstants.h"

using namespace std;

int a = 123; // global
extern int ea; // external linkage
void doSomething(); // forward declaration

void func1()
{
    int a = 10; // local variable로 func1 내에서만 생존하는 변수.
    static int b = 5; // static variable. 최초에 할당한 메모리를 그대로 활용한다.
    ++a;
    ++b;

    cout << a << " " << b << "\n" <<  endl;
}

void func2()
{
    ++a; // global 변수 a의 값을 증가시킴.

    cout << a << endl;
}


int main()
{
    cout << a << endl; // 123
    
    int a = 10;
    cout << a << endl; // 10
    cout << ::a << "\n" << endl; // global variable에 접근하기 위한 (::) 범위 지정 연산자.

    func1();
    func1();
    func1();

    func2();
    func2();
    func2();

    cout << "In code1.cpp " << Constants::pi << &Constants::pi << endl;
    doSomething();

    return 0;
}
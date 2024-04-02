#include <iostream>

/*
함수의 이름과 파라미터들까지 모두 같은 경우 충돌이 일어남.
code1.cpp:14:5: note: ‘int func1(int, int)’ previously defined here

만약 이름이 같지만 파라미터가 다른 경우 충돌이 일어나지 않음.
이름도 같고 파라미터도 같지만 서로 계산을 수행하는 함수를 만들고자 하는 경우 namespace를 사용한다.
*/
int func1(int a)
{
    return a + 1;
}

int func1(int a, int b)
{
    return a + b;
}

namespace myspace
{
    int func1(int a, int b)
    {
        return a + b;
    }
}


int main()
{
    using namespace std;

    int apple = 10; 
    int orange = 20;
    cout << apple << endl;
    cout << orange << endl;
    cout << &orange << endl;

    {
        apple = 5; // apple이란 변수에 접근하기 때문에 값이 직접 변경된다.
        cout << apple << endl;

        int orange = 17;
        cout << orange << endl; //현재 scope 내에서만 활용되는 변수로 이전에 정의된 orange와 완전히 다른 변수임.
        cout << &orange << endl;
    }
    cout << apple << endl;
    cout << orange << endl;
}
#include <iostream>

using namespace std;

int main()
{
    int x = 3;
    int y = 10;

    // comma operator
    // int z1 = (++x, ++y);
    ++x;
    ++y;
    int z1 = y;
    cout << z1 << endl;

    int a = 1, b = 10; // comma operator가 아님. 단순히 두 개의 변수를 구분하기 위함.
    int z2;

    z2 = a, b; // comma 연산자가 대입 연산자보다 우선순위가 낮기 때문에 a가 z2에 들어감.
    // z2 = (a++, a + b); // a -> a+b -> z2=a+b
    z2 = (++a, a + b); // ++a -> a+b -> z2=a+b

    cout << z2 << endl;


    return 0;
}
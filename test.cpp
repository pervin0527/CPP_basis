#include<iostream>

using namespace std;

int main()
{
    cout << "Hello C++." << endl;

    char name[100]; // 100개의 문자형(character)를 저장할 수 있는 배열을 선언.
    cin >> name;
    cout << name << endl;

    int a;
    a = 123;
    //float a; 와 같이 동일한 변수 이름으로 다른 자료형을 부여하는 것이 불가능하다.
    cout << a << " " << sizeof(int) << endl; // signed int는 4바이트(32비트)

    cout << sizeof(name) << endl; // 배열의 길이 * 자료형이 해당 배열의 크기.

    int i;
    i = 123.456;
    cout << i << endl;

    float f = 567.89;
    cout << sizeof(f) << " " << sizeof(567.89) << endl;

    cout << boolalpha << true << endl;
    cout << false << endl;

    return 0;
}
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Hello World" << endl; // double quote(쌍따옴표) 안에 여러 개의 문자들이 연속적으로 나열된 것이 문자열(string).
    cout << 'a' << endl; // single quote(따옴표) 안에 하나의 문자로 구성된 경우 문자(character).

    // 문자는 문자 타입(자료형) 변수에 저장이 가능하다.
    char ch1 = 'a';
    char ch2 = 97;
    cout << "ch0 : " << ch1 << endl;
    cout << "ch1 : " << ch2 << endl;
    cout << "ch0 int : " << int(ch1) << endl;

    // uint8_t는 unsigned char이기 때문에 127이 최대값이고, 아스키코드도 127까지의 매칭 문자들로 구성.
    // 따라서 128 이상의 값을 char + cout을 하는 경우 아무것도 출력되지 못한다.
    cout << numeric_limits<uint8_t>::max() << endl; // 아무것도 출력되지 못함.
    cout << int(numeric_limits<uint8_t>::max()) << endl;

    return 0;
}
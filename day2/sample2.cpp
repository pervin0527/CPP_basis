#include <iostream>
#include <limits>

using namespace std;
int main()
{

    short s = 1;
    cout << sizeof(s) << endl; // 2byte
    cout << numeric_limits<short>::min() << endl;  // -32768
    cout << numeric_limits<short>::max() << "\n" << endl; // 32767

    int i = 1;
    cout << sizeof(i) << endl; // 4byte
    cout << numeric_limits<int>::min() << endl; // -2147483648
    cout << numeric_limits<int>::max() << "\n" << endl; // 2147483647

    long l = 1;
    cout << sizeof(l) << endl; // 8byte
    cout << numeric_limits<long>::min() << endl; // -9223372036854775808
    cout << numeric_limits<long>::max() << "\n" << endl; // 9223372036854775807

    long long ll = 1;
    cout << sizeof(ll) << endl; // 8byte
    cout << numeric_limits<long long>::min() << endl; // -9223372036854775808
    cout << numeric_limits<long long>::max() << "\n" << endl; // 9223372036854775807

    s = 32767; // short int가 표현할 수 있는 최댓값.
    s = s + 1; // 32768이 되면서 범위를 초과함.
    cout << s << "\n" <<  endl; // -32768 int overflow

    unsigned int x = -1; // unsigned에 음수를 저장.
    cout << x << endl; // 4294967295. 심지어 경고문도 없이 정상적으로 컴파일된다.

    return 0;
}
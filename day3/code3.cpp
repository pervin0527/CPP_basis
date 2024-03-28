#include <iostream>

using namespace std;

int main()
{
    int x = 6;
    int y = 6;

    cout << x << " " << y << endl;
    cout << ++x << " " << ++y << endl; // 선증가
    cout << x++ << " " << y++ << endl; // 후증가
    cout << x << " " << y << endl;

    int a = 10;
    cout << ++a - 3 << endl; // 선증가 후 3을 뺀다. -> 8
    cout << a++ - 3 <<  endl; // -3을 빼고 나서 증가 -> 8

    return 0;
}
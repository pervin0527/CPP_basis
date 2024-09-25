#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    cout << (~num1) << endl;

    int num2 = 5;
    int num3 = 10;
    cout << (num2 & num3) << endl;

    bool isPresent = false;
    uint32_t attendanceBook = 0; // 32bit, 4byte 정수형 변수 0000000000000000 즉, 각 비트가 하루에 대한 출석을 나타내게 된다.
    attendanceBook = 5u; // 첫째날(2^0)과 셋째날(2^2)에 출석(1)했음을 나타낸다.

    // 첫째날에 출석했어??
    if (attendanceBook & 1u)
    {
        cout << "첫째날 출석했어" << endl;
    }
    else if (attendanceBook & 2u)
    {
        cout << "둘째날 출석했어" << endl;
    }

    if (attendanceBook & 3u)
    {
        cout << "첫째날, 셋째날 출석했어" << endl;
    }
    


    return 0;
}
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << (int)numeric_limits<uint8_t>::max() << endl; // uint8_t는 char형이기 때문에 정수형으로 변환시켜야함.
    cout << numeric_limits<uint16_t>::max() << endl;
    cout << numeric_limits<int32_t>::max() << endl;
    cout << numeric_limits<uint64_t>::max() << endl;

    cout << endl;
    cout << (int)numeric_limits<int8_t>::max() << endl;
    cout << numeric_limits<int16_t>::max() << endl;
    cout << numeric_limits<int32_t>::max() << endl;
    cout << numeric_limits<int64_t>::max() << endl;

    cout << endl;
    uint32_t num1 = numeric_limits<uint32_t>::max();
    uint32_t num1Prime = num1 + 1;
    cout << num1 << endl;
    cout << num1Prime << endl;

    cout << endl;
    int32_t num2 = numeric_limits<int32_t>::max();
    int32_t num2Prime = num2 + 1;
    cout << num2 << endl;
    cout << num2Prime << endl;

    cout << endl;
    uint32_t num3 = numeric_limits<uint32_t>::min();
    uint32_t num3Prime = num3 - 1;
    cout << num3 << endl;
    cout << num3Prime << endl;

    return 0;
}
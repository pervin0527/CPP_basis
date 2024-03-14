#include <iostream>

using namespace std;

int simpleFunction(int x, int y)
{
    return x + y;
}

// 동일한 이름의 정의가 불가능한 것 처럼 동일한 이름의 함수 정의가 불가능함.
// int simpleFunction(int x, int y)
// {
//     return x * y;
// }

int main()
{
    cout << "Input x and y" << endl;

    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;

    int result = simpleFunction(x, y);
    cout << result << endl;

    return 0;
}
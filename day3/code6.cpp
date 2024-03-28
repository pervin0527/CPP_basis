#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    int y = 2;

    if (x == 1 && y++ == 2) // AND 연산자는 왼쪽에서 오른쪽으로 우선순위를 가짐. 만약 왼쪽이 False인 경우 오른쪽을 건너뛴다.
    {
        cout << "All same." << endl;
    }

    cout << y << endl; // 2

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int x = 10; // 어떤 메모리 공간에 정수 10을 저장하며, 해당 공간을 메모리 주소값 대신 변수명 x로 다루겠다고 정의.
    x = x + 7; // 우변에 x는 10으로 치환되고 7과 더해짐. 두 개의 값은 개발자가 접근할 수 없는 Right value이고, 좌변의 변수 x는 접근이 가능한 left value

    cout << x << endl;
    cout << &x << endl; // Ampersand. 실제 메모리 주소를 출력.

    return 0;
}
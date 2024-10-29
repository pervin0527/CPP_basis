#include <iostream>

using namespace std;

int Add(int a, int b); // 선언과 정의를 분리할 수 있다.

void Add(int a, int b, int *c, int *d) // 포인터변수 c가 가리키는 메모리 공간에 a+b를 저장한다.
{
    *c = a + b; // c++ 함수는 하나의 변수(값)만 반환할 수 있기 때문에
    *d = a - b; //  이처럼 여러 개의 포인터를 사용해서 여러 개의 값을 반환하는 형태로 만들 수 있다.

    // 또한 크기가 매우 큰 배열을 함수로 전달할 때 포인터를 사용함.(배열에 대한 포인터는 첫번째 원소의 주소)
}

int main()
{
    int r1 = Add(4, 5);

    int r2, r3;
    Add(4, 5, &r2, &r3); // 메모리 주소를 함수 호출 시 전달.

    cout << "r1 : " << r1 << endl;
    cout << "r2 : " << r2 << endl;
    cout << "r3 : " << r3 << endl;

    return 0;
}

int Add(int a, int b) // 헤더 파일에는 선언만 해놓고 호출시 정의를 참조.
{
    return a + b;
}
#include <iostream>

using namespace std;

int main()
{
    int a = 123;
    cout << a << " " << &a << endl; // &(embersand)

    int *b = &a; // *(dereference operator) 변수 a의 주소값을 보고 해당 공간에 저장되어 있는 값을 가져와라.
    cout << b << " " << *b << endl;

    *b = 567;
    cout << a << " " << &a << endl;
    cout << b << " " << *b << endl;

    int c[3] = {0, 1, 2};
    int *c_ptr = c;
    cout << c_ptr << endl; // 배열의 주소는 첫번째 원소와 동일한 주소를 갖는다.
    cout << &c[0] << endl; 
    cout << *c_ptr << endl;
    cout << *(c_ptr+1) << endl;
    cout << *(c_ptr+2) << endl;

    double *d = nullptr; // null pointer. 아무것도 가리키지 않겠다.
    cout << sizeof(int) << " " << sizeof(double) << endl;
    cout << sizeof(int *) << " " << sizeof(double *) << " " << sizeof(char *) <<  endl; // 포인터의 크기는 가리키는 대상(자료형)의 크기와 무관

    cout << sizeof(size_t) << endl; // size_t는 16진수를 10진수로 바꿔주는 역할.
    cout << size_t(b) << " " << size_t(b+1) << " " << size_t(b+2) << endl;
    cout << size_t(d) << " " << size_t(d+1) << " " << size_t(d+2) << endl;

    char str[] = "hello, World!";
    char *p = str;
    cout << *(p+3) << endl;
    cout << *(p+4) << endl;

    return 0;
}
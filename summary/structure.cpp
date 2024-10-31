#include <iostream>

using namespace std;

struct MyStruct
{
    int v1;
    int v2;

    int Sum()
    {
        return v1 + v2;
    }
};

int main()
{
    MyStruct st;
    st.v1 = 10;
    st.v2 = 7;

    cout << sizeof(st) << endl; // 8byte
    cout << st.Sum() << endl; // 17

    // 구조체 포인터
    MyStruct *ptr_st = &st;
    cout << ptr_st -> v1 << " " << ptr_st -> v2 << " " << ptr_st -> Sum() << endl;

    // 구조체 배열
    MyStruct st_arr[10]; // 여기서도 배열의 첫번째 주소를 가리키고 있는 포인터로 동작함.
    cout << st_arr << endl;
    cout << &st_arr[0] << endl;

    for(int i=0; i<10; i++)
    {
        cout << i << "번째 구조체 : " << st_arr[i].v1 << " " << st_arr[i].v2 << " " << st_arr[i].Sum() << endl;
    }
    
    return 0;
}
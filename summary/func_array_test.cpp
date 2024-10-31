#include <iostream>

using namespace std;

// C++에서는 배열이나 문자열이 함수의 인자로 전달되면 함수 내부적으로 해당 매개변수는 포인터로 동작함.

void func1(int *arr)
{
    cout << arr << endl; // 배열의 첫번째 원소의 주소값.
    
    cout << arr[0] << endl;
    cout << *arr << endl;

    cout << arr[1] << endl;
    cout << *(arr+1) << endl;
}

void func2(int arr[]) // int arr[]과 int *arr은 내부적으로 동일함.
{
    cout << arr << endl; // 배열의 첫번째 원소의 주소값.
    
    cout << arr[0] << endl;
    cout << *arr << endl;

    cout << arr[1] << endl;
    cout << *(arr+1) << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl;

    func1(arr);
    func2(arr);

    return 0;
}
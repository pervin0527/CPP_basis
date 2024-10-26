#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int arr[3] = {7, 17, 27};
    cout << sizeof(arr) << endl;
    cout << arr[0] <<  " " << arr[1] << " " << arr[2] << " " << endl; // 7, 17, 27

    arr[1] = 10;
    cout << arr[0] <<  " " << arr[1] << " " << arr[2] << " " << endl; // 7, 10, 27

    char arr2[100] = "Hello, World!"; // 13글자 + null character = 14글자.
    cout << sizeof(arr2) << endl;
    cout << strlen(arr2) << endl;

    char arr3[] = "자동으로 배열의 길이가 할당된다.";
    cout << strlen(arr3) << endl;
    cout << sizeof(arr3) << endl;

    cin >> arr3;
    cout << arr3 << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for(int i=0; i<10; i++)
    for(int i=0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    char arr2[] = "Hello\0, World!";
    // for(int i=0; i < (sizeof(arr2) / sizeof(char)); i++)
    for(int i=0; i < sizeof(arr2); i++)
    {
        if (arr2[i] == '\0')
            break;

        cout << arr2[i] << " ";

    }
    cout << endl;

    char arr3[] = "Hello\0, World!";
    for(int i=0; arr3[i] != '\0'; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int n=0;
    while (n < 10)
    {
        cout << n << " ";
        n++;
    }
    cout << endl;

    return 0;
}
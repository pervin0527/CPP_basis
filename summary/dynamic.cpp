#include <iostream>
#include <cstring>

using namespace std;

const int MaxStr = 100;

int Min(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    // 정적으로 배열의 크기를 할당하는 방식.
    // 정의시 설정한 크기를 바꿀 수 없음. 아주 큰 크기의 메모리를 사용할 수 없음.(Stack 메모리)
    char str1[] = "Hello, World!";
    char str2[MaxStr];

    // str1을 str2로 복사.
    // str2 = str1; // 복사할 수 없음. 잘못된 문법.
    memcpy(str2, str1, Min(sizeof(str1), sizeof(str2))); // str1을 str2에 복사하며, str1과 str2 중 크기가 더 작은 메모리에 맞춰서 복사하므로 Buffer OverFlow를 방지한다.
    cout << "str2 : " << str2 << endl;

    // 아주 큰 메모리를 사용해햐는 경우 동적할당으로 Heap 메모리를 사용.
    char *dynamic_array = new char[MaxStr]; // 내가 할당받고 싶은 메모리의 크기를 운영체제에게 명시.
    memcpy(dynamic_array, str1, Min(sizeof(str1), MaxStr));
    cout << "dynamic array : " << dynamic_array << endl;

    delete[] dynamic_array; // 동적 메모리 해제.

}
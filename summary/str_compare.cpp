#include <iostream>
#include <cstring>

using namespace std;

const int MaxStr = 100; // const는 프로그램이 끝날 때까지 값이 바뀌지 않는다는 상수를 말함.

bool IsEqual(const char *, const char *str2);
bool IsEqual(const char str1[], const char str2[]) // const char str1[]와 같은 배열 형태로 매개변수를 선언해도 함수 안에서는 const char*로 간주된다.
{
    // if (str1 == str2) // 이는 두 변수의 포인터(첫번째 원소) 주소가 동일한지 비교함. 따라서 "stop"을 입력해도 true가 될 수 없음.

    int i = 0;
    bool is_equal = true;
    while (true)
    {
        if (str1[i] != str2[i])
        {
            is_equal = false;
            break;
        }

        if (str1[i] == '\0' && str2[i] == '\0')
        {
            break;
        }

        i++;
    }

    return is_equal;

}

int main()
{
    const char str1[MaxStr] = "stop";
    while(true)
    {
        cout << "문자열 입력 : ";
        
        char str2[MaxStr];
        cin >> str2;
        
        if (IsEqual(str1, str2))
        {
            cout << "종료합니다." << endl;
            break;
        }
        else
        {
            cout << "계속합니다." << endl;
        }
    }
    return 0;
}
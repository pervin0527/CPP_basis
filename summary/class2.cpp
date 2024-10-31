#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
public:
    MyString(const char s[])
    {
        for(int i=0; i < strlen(s); i++)
        {
            str[i] = s[i];
        }
        str[strlen(s)] = '\0'; // 문자열 끝에 NULL 문자 추가

    }

    ~MyString()
    {
        cout << "~MyString" << endl;
    }

    void Print()
    {
        cout << this->str << endl; // cout << str << endl; 과 같음.
    }

    void Append(MyString *s) // 클래스 포인터
    {
        int str_len = strlen(str);
        for(int i=0; i < strlen(s->str); i ++) // 클래스 포인터는 멤버에 접근할 때 ->를 사용함.
        {
            str[str_len + i] = s->str[i];
        }
        str[str_len + strlen(s->str)] = '\0';

    }

private:
    char str[100];
};

int main()
{
    MyString str1("ABCDE");
    MyString str2("123");

    str1.Print();
    str2.Print();

    str1.Append(&str2); // 인스턴스의 주소를 전달함.
    str1.Print();
    return 0;
}
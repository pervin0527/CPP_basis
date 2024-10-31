#include <iostream>
#include <cstring>

using namespace std;

class MyClass
{
public: // class 외부에서도 접근 가능한 멤버.
    MyClass() // 생성자
    {
        cout << "MyClass()" << endl;
        cout << "this pointer" << this << endl;
    }

    MyClass(int number) // 생성자
    {
        cout << "MyClass(int number)" << endl;
        
        // this -> number_ = number; // 멤버변수 number_ 를 number로 초기화.
        number_ = number;

        cout << "this pointer " << this << endl;
    }

    ~MyClass() // 소멸자
    {
        cout << "~MyClass()" << endl;
    }

    void Increment(int a)
    {
        number_ += a;
    }

    void Print()
    {
        cout << number_ << endl;
    }

private: // class 내부에서만 접근 가능한 멤버.
    int number_ = 0;
};

int main()
{
    MyClass my_class1;
    cout << &my_class1 << endl;
    MyClass my_class2(123);
    cout << &my_class2 << endl;

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(8);
    my_class1.Print();
    
    my_class2.Increment(10);
    my_class2.Print();

    MyClass cls_arr[5];
    for(int i=0; i<5; i++)
    {
        cout << i << "번째 인스턴스 " << &cls_arr[i] << endl;
        cls_arr[i].Print();
    }
}
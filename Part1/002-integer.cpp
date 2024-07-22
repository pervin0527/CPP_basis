// g++ -o ./build/int 002-integer.cpp 
// ./build/int

#include <iostream>

int main(){
    int x, y, z;
    x = 10; // 10은 리터럴 상수
    y = 5;
    z = 2;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    int a = 4, b = 5, c = 6;
    std::cout << a << " " << b << " " << c << std::endl;


    int r = 100, t(10), p(17); // CPP 스타일 초기화
    std::cout << r << " " << t << " " << p << std::endl;
 
    int num1 = 011; // 8진수
    int num2 = 0b11; // 2진수
    int num3 = 0x11; // 16진수
    std::cout << num1 << " " << num2 << " " << num3 << std::endl;

    int intNum = 0;
    long longNum = 0;
    int* intPointer = &intNum;
    std::cout << "int형 변수의 크기 : " << sizeof(intNum) << std::endl;
    std::cout << "long형 변수의 크기 : " << sizeof(longNum) << std::endl;
    std::cout << "int형 포인터의 크기 : " << sizeof(intPointer) << std::endl;

    int16_t intNum16 = 0;
    std::cout << "16_t는 어떤 플랫폼이든 16비트 정수형으로 만든다. : " << sizeof(intNum16) << std::endl;

    unsigned int unsInt = 17u;
    unsigned long unsLint = 17Lu; // 또는 17l
    unsigned long long unsLLint = 17LLu;

    return 0;   
}
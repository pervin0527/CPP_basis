#include <cstdio> // c언어의 <stdio.h>를 c++에서는 이렇게 선언한다.

int main()
{
    // python의 f-string처럼 지정된 형식에 따라 문자열을 출력하는 함수.
    // %d, %s와 같이 형식 문자열을 사용할 수 있다.
    printf("I am %d's old.", 10);

    int num;
    char ch;
    int n = scanf("%d", &num);

    printf("%d", n);    

    return 0;
}
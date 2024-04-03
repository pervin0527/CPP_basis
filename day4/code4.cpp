#include <iostream>

namespace mySpace1
{
    int var = 10;
    int a = 123;
    int count = 456;
}

namespace mySpace2
{
    int var = 20;
    int a = 123;
}

int main()
{
    using namespace std; 
    // using std::cout;

    using namespace mySpace1;
    using namespace mySpace2;

    cout << "Hello" << endl;
    cout << mySpace2::var << endl; // 모호성을 제거하기 위해 범위 연산자 ::를 사용
    cout << mySpace1::count << endl;

    return 0;
}
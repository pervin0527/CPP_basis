#include <iostream>

using namespace std;

int main()
{
    bool b0 = 0 == 0;
    bool b1 = 0 < 1;
    bool b2 = 0 > 1;

    cout.setf(ios_base::boolalpha); // 출력의 형태를 true, false로 나타낸다.
    cout << "b0 : " << b0 << endl;
    cout << "b1 : " << b1 << endl;
    cout << "b2 : " << b2 << endl;

    return 0;
}
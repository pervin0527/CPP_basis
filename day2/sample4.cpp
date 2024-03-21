#include <iostream>
#include <limits>
#include <iomanip>

int main()
{
    using namespace std;

    bool b1 = true;
    bool b2 = false;

    bool b3 = 1;
    bool b4 = 2;
    bool b5 = 0; 

    cout << boolalpha; // 설정하면 True, False로 출력함.
    cout << b1 << " " << b2 << endl;
    cout << b3 << " " << b4 << endl;
    cout << b5 << "\n" << endl;

    bool nb1 = true;
    cout << !b1 << endl; // not operator

    cout << (true && true) << endl; // AND
    cout << (true || true) << endl; // OR

    cout << std::setprecision(20);
    if (0.1 + 0.1 + 0.1 == 0.3)
    {
        cout << "SAME" << endl;
    }

    else
    {
        cout << 0.1 + 0.1 + 0.1 << endl;
        cout << 0.3 << endl;
    }

    bool b;
    cin >> b;
    cout << "Your Input : " << b << endl;

    return 0;
}
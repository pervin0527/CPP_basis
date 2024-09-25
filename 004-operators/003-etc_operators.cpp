#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;
    cout << num << endl;
    num == 0 ? (cout << "num == 0" << endl) : (cout << "num != 0" << endl);
    cout << (num == 0 ? "num == 0" : "num != 0") << endl;

    cout << sizeof(int) << endl;

    return 0;
}
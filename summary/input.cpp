#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    char user_input[100];
    // cin >> user_input;

    // cin.getline(user_input, sizeof(user_input));
    cin.getline(user_input, 5);

    cout << "입력한 문자열: " << user_input << endl;
    cout << "user_input의 자료형: " << typeid(user_input).name() << endl;

    return 0;
}

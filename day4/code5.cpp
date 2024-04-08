#include <iostream>
#include <string>

int main()
{
    using namespace std;
    // const char my_str = "Hello World!";

    const char my_strs [] = "Hello, world";
    const string my_hello = "Hello, world";

    string my_id = "Pervinco";
    string my_number = "123";

    cout << "Your name? : ";
    string name;
    cin >> name;

    cout << "Your age? : ";
    string age;
    cin >> age;

    cout << name << " " << age << endl;

    string a = "Hello, ";
    string b = "World.";

    cout << a + b << endl;

    return 0;
}
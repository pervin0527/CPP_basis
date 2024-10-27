#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd; // seed 생성.
    mt19937 gen(rd()); // Mersenne Twister 알고리즘으로 난수를 생성하는 생성기.
    uniform_int_distribution<> distrib(1, 99); // 균등분포를 따른다.

    int number = distrib(gen);
    
    while (true)
    {
        int user_input;
        cout << "입력 : ";
        cin >> user_input;

        if (user_input == number)
        {
            cout << "정답." << endl;
            break;
        }

        else if (user_input > number)
        {
            cout << "너무 크다." << endl;
        }

        else
        {
            cout << "너무 작다." << endl;
        }

    }

    return 0;
}
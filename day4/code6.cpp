#include <iostream>

enum Color
{
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
};

enum class RGB
{
    RED=7,
    GREEN=17,
    BLUE=27,
};

int main()
{
    using namespace std;

    Color my_color1 = COLOR_RED;
    Color my_color2 = COLOR_GREEN;
    Color my_color3 = COLOR_BLUE;

    cout << my_color1 << " " << my_color2 << " " << my_color3 << endl;

    RGB R = RGB::RED;
    
    int in_number;
    cin >> in_number;

    if (in_number == int(RGB::RED))
    {
        std::cout << "The color is Red." << std::endl;
    }


    return 0;
}
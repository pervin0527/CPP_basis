#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    unsigned char items_flag = 0;
    cout << "No item" << bitset<8>(items_flag) << endl;

    items_flag |= opt0;
    cout << "ITEM 0 get!" << bitset<8>(items_flag) << endl;

    items_flag |= opt3;
    cout << "ITEM 3 get!" << bitset<8>(items_flag) << endl;    

    items_flag &= ~opt3;
    cout << "ITEM 3 lost.." << bitset<8>(items_flag) << endl;

    if (items_flag & opt1)
    {
        cout << "Has item1" << endl;
    }
    else
    {
        cout << "Not have item1" << endl;
    }

    // obtain item 2 and 3
    items_flag |= (opt2 | opt3);
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "ITEM 2 and 3 obtained " << bitset<8>(items_flag) << endl;

    if ((items_flag & opt2) && !(items_flag & opt1))
    {
        items_flag ^= opt2;
        items_flag ^= opt1;
    }


    return 0;
}
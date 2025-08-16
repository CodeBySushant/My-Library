// Maximum number of 69
#include <iostream>
using namespace std;
int main()
{
    string st;
    cout << "Enter a number only made of 6 & 9: ";
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '6')
        {
            st[i] = '9';
            break;
        }
        else
        {
            cout << "Invalid number!";
            break;
        }
    }

    cout << st;
    return 0;
}
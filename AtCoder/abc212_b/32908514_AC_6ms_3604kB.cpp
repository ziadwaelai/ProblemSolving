#include<iostream>
using namespace std;

int main()
{
    string pin;
    cin >> pin;

    if (pin[0] == pin[1] && pin[0] == pin[2] && pin[0] == pin[3])
    {
        cout << "Weak" << endl;
    }
    else
    {
        bool isStrong = false;
        for (int i = 1; i < 4; i++)
        {
            if ('0' <= pin[i-1] && pin[i-1] <= '8')
            {
                char c1 = pin[i-1];
                char c2 = pin[i];
                if (c1 != (c2 - 1)) isStrong = true;
            }
            else
            {
                if (pin[i] != '0') isStrong = true;
            }
        }

        if (isStrong) {cout << "Strong";}
        else {cout << "Weak" ;}
    }




}

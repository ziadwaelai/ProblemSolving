#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//zee
int main()
{

    string S;
    cin >> S;
    int ans = 0;
    for(int i = 0; i < 10000; i++)
    {
        vector<bool> flag(10);
        int x = i;
        for(int j = 0; j < 4; j++)
        {
            flag[x%10] = true;
            x /= 10;
        }
        bool flag2 = true;
        for(int j = 0; j < 10; j++)
        {
            if(S[j] == 'o' && !flag[j])
            {
                flag2 = false;
            }
            if(S[j] == 'x' && flag[j])
            {
                flag2 = false;
            }
        }
        ans += flag2;
    }
    cout << ans <<endl;

}


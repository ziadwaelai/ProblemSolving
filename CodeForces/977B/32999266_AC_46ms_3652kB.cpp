#include <bits/stdc++.h>
#include<string>
using  namespace  std ;
int main()
{
    string s,str;
    int n,i,j,cnt = 0,ans;
    cin >> n >> s;
    for (i = 0 ; i<n- 1 ; i++)
    {
        ans= 0 ;
        for (j=i; j<n- 1 ; j++)
        {
            if (s[j]==s[i]&&s[j+ 1 ]==s[i+ 1 ])
                ans++;
        }
        if (ans>cnt)
        {
            cnt=ans;
            str.clear();
            str.push_back(s[i]);
            str.push_back(s[i+1]);
        }
    }
    cout <<str<<endl;

}

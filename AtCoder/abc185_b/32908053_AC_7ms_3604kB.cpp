#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int m,n,T;
    cin>>m>>n>>T;
    int c=m,p=0,l,r;
    while(n--)
    {
        cin>>l>>r;
        c-=(l-p);
        if(c<=0)
        {
            cout<<"No";
            return 0;
        }
        c+=(r-l);
        c=min(c,m);
        p=r;
    }
    if(c-(T-p)>0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}

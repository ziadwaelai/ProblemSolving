#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int M = max(a,max(b,c));
    if(M==a)
    {
        cout<<a+max(b,c);
    }
    else if(M==b)
    {
        cout<<b+max(a,c);
    }
    else
    {
        cout<<c+max(a,b);
    }

}

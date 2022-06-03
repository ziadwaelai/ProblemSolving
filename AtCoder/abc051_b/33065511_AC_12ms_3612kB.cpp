#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s,x=0,y=0,z=0;
    cin>>k>>s;
    int ans=0;
    for(int i=0; i<=k; i++)
    {
        x=i;
        for(int j=0; j<=k; j++)
        {
            y=j;
            z=s-x-y;
            if(x+y+z==s &&x<=k&&y<=k&&z<=k &&z>=0)
            {
                ans++;
            }
        }
    }
    cout<<ans;
}

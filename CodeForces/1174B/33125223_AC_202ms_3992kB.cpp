#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#define ll long long
#define end '\n'
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define sn scanf("%d",&n)
#define done return 0
using namespace std;
///////////////Zee///////////////

int main()
{

    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);*/




    int n;
    cin>>n;
    int a[n];
    int even=0,odd=0;

    rep(i,0,n)
    {
        cin>>a[i];
        if(a[i]%2==0) even++;
        else
        {
            odd++;
        }
    }

    if(even!=0&&odd!=0) sort(a,a+n);

    rep(i,0,n)
    {
        cout<<a[i];
        if(i!=n-1)
        {
            cout<<" ";
        }
    }

    done;

}


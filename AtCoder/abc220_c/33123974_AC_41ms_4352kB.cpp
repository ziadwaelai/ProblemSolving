#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#define ll long long
#define end '\n'
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define input(str) scanf("%d",&str);
using namespace std;
///////////////Zee///////////////

int main()
{

    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);*/




    ll n;
    cin>>n;
    ll sum =0;
    ll arr[n];
    rep(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll k;
    cin>>k;
    // cout<<sum<<end;
    ll check=k/sum;
         sum*=check;
      ll rem=k-(sum);
   // cout<<"sum"<<rem<<end;
   ll p=0;
    for(ll i=0;rem>=0;i++)
    {
       rem-=arr[i];
       p++;
    }

cout<<(check*n)+p ;

}






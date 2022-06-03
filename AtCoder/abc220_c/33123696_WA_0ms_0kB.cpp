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




    long long n;
    cin>>n;
    long long sum =0;
    long long arr[n];
    rep(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int k;
    cin>>k;
    // cout<<sum<<end;
    int check=k/sum;
    sum*=check;
    //cout<<sum<<end;
    rep(i,0,n)
    {
        int o=sum+arr[i];
        if(o<=k)
        {
            sum+=arr[i];
        }

        else
        {
            cout<<(check*n) +i+1 ;
            return 0;
        }
    }



}






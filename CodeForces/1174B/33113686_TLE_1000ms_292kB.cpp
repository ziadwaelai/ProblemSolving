#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#define ll long long
#define end '\n'
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
using namespace std;
///////////////Zee///////////////

int main()
{

 ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin.exceptions(ios::badbit | ios::failbit);


    int n;cin>>n;
    int arr[n];
    rep(i,0,n){
    cin>>arr[i];

    }
   rep(i,0,n){
   rep(j,0,n){
    if(int(arr[i])<int(arr[j])){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
   }

    }
       rep(i,0,n){
    cout<<arr[i]<<" ";

    }




}






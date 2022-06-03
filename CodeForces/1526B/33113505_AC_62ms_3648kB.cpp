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


int n;cin>>n;

while(n--){
    int num;cin>>num;
    rep(i,0,1000){
    if(num%11==0){
        cout<<"Yes"<<end;
        goto zee;
    }
    else{
        num-=111;
        if(num<0){break;}
    }
    }
cout<<"No"<<end;
zee:;

}





}






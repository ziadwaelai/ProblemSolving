#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long
#define endl '\n'
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
#define sn(n) scanf("%d", &n)
#define done return 0
using namespace std;
///////////////Zee///////////////
string & removeDuplicate(string& str)
{
  int length = str.length();
  for( int i = 0; i < length; i++)
  {
    char currChar = str[i]; 
    for( int j = i+1; j < length; j++)
    {
      if(currChar == str[j])
        str.erase (remove(str.begin()+j, str.end(), str[j]), str.end());
    }
  }
  return str;
}
int find(ll arr[100],ll n){
    int c=0;
    rep(i,0,n){
        if(arr[i]==3){
        c=i+1;
       break;
        }
    }
    return c;
}
int main()
{
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt","w",stdout);
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin.exceptions(ios::badbit | ios::failbit);

   string s;
    cin>>s;
 
    int n = s.size();
    int be,en;
 
    for(int i=0 ; i<n ; i++){
        if(s[i] != '0'){
            be=i;
            break;
        }
    }
 
    for(int i=n-1 ; i>=0 ; i--){
        if(s[i] != '0'){
            en=i;
            break;
        }
    }
 
    bool flag = true;
 
    for(int i=be,j=en ; i<=en ; i++,j--){
        if(s[i] != s[j]){
            flag=false;
            break;
        }
    }
 
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    done;
  
  }


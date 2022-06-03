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
//////////////////////////////////////////////////////////////Zee//////////////////////////////////////////////////////////////
string &removeDuplicate(string &str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        char currChar = str[i];
        for (int j = i + 1; j < length; j++)
        {
            if (currChar == str[j])
                str.erase(remove(str.begin() + j, str.end(), str[j]), str.end());
        }
    }
    return str;
}
ll factor(ll num){
    ll factor=1;
    rep(i,1,num+1){
        factor*=i;
    }
    return factor;
}
bool cheakReverse(string t){
	string c=t;
	reverse(c.begin(),c.end());
	return c==t;
}

/////////////////////////////////////////////////////////////////start////////////////////////////////////////////////////////////////
int main()
{
 //   freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll n,k,x,y,sum=0;
cin>>n>>k>>x>>y;
for(int i=0;i<n;i++){
    if(k!=0){
        sum+=x;
        k--;
    }else{
        sum+=y;
    }
}
cout<<sum;
}

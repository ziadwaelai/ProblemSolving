#include<iostream>
#include<algorithm>
using namespace std;
//zee
int main(){
    long long n;
    cin>>n;
    pair<long,long> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    long long x=0,y=0;
    for(int i=0;i<n;i++){
        x+=a[i].first;
    }
    for(int i=0;i<n;i++){
        int temp = a[i].first;
        a[i].first = 2*a[i].first+a[i].second;
        a[i].second = temp;
    }
    sort(a,a+n);
    long long ans=0;
    long long i=n-1;
    while(x>=y){
        ans++;
        y+=a[i].first-a[i].second;
        x-=a[i].second;
        i--;
    }
    cout<<ans;
}


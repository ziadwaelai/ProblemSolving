#include<iostream>
#include<algorithm>
using namespace std;
//zee
int main(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        x+=a[i].first;
    }
    for(int i=0;i<n;i++){
        int temp = a[i].first;
        a[i].first = 2*a[i].first+a[i].second;
        a[i].second = temp;
    }
    sort(a,a+n);
    int ans=0;
    int i=n-1;
    while(x>=y){
        ans++;
        y+=a[i].first-a[i].second;
        x-=a[i].second;
        i--;
    }
    cout<<ans;
}


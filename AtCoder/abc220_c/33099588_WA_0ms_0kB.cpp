#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//zee
int main()
{

int n;cin>>n;
int ans =0;
int arr[n];
for(int i=0;i<n;i++){

    cin>>arr[i];
}

int k;cin>>k;
int o=0;
while(ans<=k){
    for(int i=0;i<n;i++){
    ans+=arr[i];
    o++;
    if(ans>=k){
        cout<<o;
        return 0;
    }
}

}

}


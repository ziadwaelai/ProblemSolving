#include<iostream>
using namespace std;
int main(){
int num0=0;
cin>>num0;
int arr[num0];
for(int i=0;i<num0;i++){
    cin>>arr[i];
}
for(int j=0;j<num0;j++ ){
for(int i=0;i>-1;i++){
    arr[i]-=11;
if (arr[i]==1 || arr[i]==0 ){
    cout<<"No";
    break;
}
if(arr[i]<0){
    cout<<"Yes";
    break;
}
}
}
}

#include<iostream>

using namespace std;
int main(){
int arr[5];
int l;
for(int i=0;i<5;i++){
    cin>>arr[i];
}
for(int i=0;i<5;i++){
    if(arr[i]==0){
        l=i;
        break;
    }
}
cout<<l+1;
}


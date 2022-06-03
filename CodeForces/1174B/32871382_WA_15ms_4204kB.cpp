#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
int temp;
for(int i=0;i<n;i++){


    cin>>arr[i];
}

int odd;
for(int i =0;i<n-1;++i){
odd=arr[i]+arr[i+1];
if(odd%2!=0){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i++;

}
}
for(int i =0;i<n;i++){


    cout<<arr[i]<<' ';
}


}
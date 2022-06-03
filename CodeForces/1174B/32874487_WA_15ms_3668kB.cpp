#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
int arr2[n];
int temp;
for(int i=0;i<n;i++){


    cin>>arr[i];
}
for(int i=0;i<n;i++){


    arr2[i]=arr[i];
}

int odd;
for(int i=0;i<n-1;i+=2){
odd=arr[i]+arr[i+1];
if(odd%2!=0){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

}
}
for(int i =0;i<n;i++){



    cout<<arr[i]<<" ";
}


}

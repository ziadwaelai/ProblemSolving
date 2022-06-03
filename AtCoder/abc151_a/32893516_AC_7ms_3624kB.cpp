#include<iostream>

using namespace std;
int main(){
string arr="abcdefghijklmnopqrstuvwxyz";
char text;
cin>>text;
int l;
for(int i =0;i<arr.length();i++){
    if(arr[i]==text){
    l=i;
    }
}
cout<<arr[l+1];
}


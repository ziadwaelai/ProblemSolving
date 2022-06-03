#include<iostream>

using namespace std;
int main(){
string x;
cin>>x;
int c=0;
for(int i=0;i<x.length();i++){
    if(x[i]=='7'){
        c=1;
        break;
    }
}

if(c==1){
    cout<<"Yes";
}else{
cout<<"No";}
}


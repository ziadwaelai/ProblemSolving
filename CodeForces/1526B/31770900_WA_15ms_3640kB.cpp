#include<iostream>
using namespace std;
int main(){

int num=0;
cin>>num;
for(int i=0;i>-1;i++){
    num-=11;
if (num==1 || num==0 ){
    cout<<"Yes";
    break;
}
if(num<0){
    cout<<"No";
    break;
}
}
}

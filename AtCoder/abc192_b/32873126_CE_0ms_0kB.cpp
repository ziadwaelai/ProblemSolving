#include<iostream>
using namespace std;

int main(){
string in;
int c=0;
cin>>in;
bool isLowrs;
int len =in.length();
if(len%2==0){

    len=len/2;
}
else{
    len=(len+1)/2;
}
for(int i=1;i<len;i=+2){
        if(islower(in[i])){
            c+=1;
        }
}

if(c==len){

    cout<<"Yes";
}
else{

    cout<<"No";
}


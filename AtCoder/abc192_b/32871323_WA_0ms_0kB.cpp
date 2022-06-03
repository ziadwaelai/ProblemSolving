#include<iostream>
using namespace std;

int main(){
string in;
bool isLowrs;
 cin>>in;
 int len =in.length();
for(int i=0;i<len;i++){
    if(i%2==0){
       isLowrs=islower(in[i]);

    }else{
        isLowrs=!isupper(in[i]);
    }

}
if(isLowrs){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}


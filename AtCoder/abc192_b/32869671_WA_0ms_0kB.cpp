#include<iostream>
using namespace std;

int main(){
string input;
bool isLowrs;
 cin>>input;
 int len =input.length();
for(int i=0;i<len;i++){
    if(i%2==0){
       isLowrs=islower(input[i]);

    }else{
        isLowrs=!isupper(input[i]);
    }

}
if(isLowrs){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}

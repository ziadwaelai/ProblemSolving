#include<iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
string input;
bool isLowrs;
 cin>>input;
 int len =input.length();
for(int i=1;i<len+1;i++){
    if(i%2==0){
       isLowrs=islower(input[i]);
    }

}
if(isLowrs){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}

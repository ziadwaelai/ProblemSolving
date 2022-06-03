#include <iostream>
#include <cstdio>
#include <iomanip>
#include<vector>
//zee//
using namespace std;

int main()
{
string input;cin>>input;
int arr[4];
for(int i=0;i<input.length();i++){
    if(input[i]!='.'){
        arr[i]=int(input[i]-'0');
    }else{arr[i]=0;}


}
string output;
int p=0;
if(input.length()==4){
        int p=3;
    output=to_string(arr[0])+to_string(arr[1]);
}
else{
    int p=2;
     output=to_string(arr[0]);
}

string o=to_string(arr[p]);
int i=int((input[input.length()-1])-'0');

if(i==7||i==8||i==9){
    cout<<output<<"+";
}
else if(i==3||i==4||i==5||i==6){
    cout<<output;
}
else if(i==0||i==1||i==2){cout<<output<<"-";}


}

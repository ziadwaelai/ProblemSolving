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
int i=stoi(o);


if(7<=i){
    cout<<output<<"+";
}
else if(3<=i){
    cout<<output;
}
else{cout<<output<<"-";}


}

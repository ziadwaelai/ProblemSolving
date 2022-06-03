#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string input;
int i;cin>>i;
cin>>input;
for(int i =0;i<input.length();i++){
    if(input[i]==input[i+1]){
    continue;
    }else{
    cout<<"No";
    return 0;
    }

}
cout<<"Yes";
return 0;
}


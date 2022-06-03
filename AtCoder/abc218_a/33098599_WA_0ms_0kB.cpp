#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string input;
int i;cin>>i;
int c=0;
cin>>input;
for(int i =0;i<input.length();i++){
    if(input[i]=='o'&&input[i+1]=='o'){
       c++;
    }

}
if(c>=6){
    cout<<"yes";
}else{cout<<"No";}
return 0;
}



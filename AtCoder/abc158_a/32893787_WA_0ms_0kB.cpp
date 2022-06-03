#include<iostream>

using namespace std;
int main(){
string text;
cin>>text;
int c=-1;
for(int i=0;i<text.length();i++){
 for(int j=0;j<text.length()-1;j++){
    if(text[i]==text[j+1]){
        c+=1;

    }
}
}
if(c<=2){
    cout<<"Yes";
}else{cout<<"No";}
}


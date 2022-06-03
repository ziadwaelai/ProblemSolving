#include<iostream>
using namespace std;

int main(){
string in;
int c=0;
cin>>in;
int len =in.length();


for(int i=1;i<len;i++){
       if(i%2!=0){
         if(islower(in[i-1])){
            c+=1;
        }
       }
}

if(len%2==0){

    len=len/2;

}
else{

    len=(len+1)/2;
    len-=1;
}
if(c==len){
    cout<<"Yes";
}
else{

    cout<<"No";
}



}

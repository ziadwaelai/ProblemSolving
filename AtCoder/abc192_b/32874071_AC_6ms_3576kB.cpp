#include<iostream>
using namespace std;

int main(){
string in;
int c=0;
int c2=0;
cin>>in;
int len =in.length();


for(int i=0;i<len;i++){
       if(i%2==0){
         if(islower(in[i])){
            c+=1;
        }
       }
       else{
             if(isupper(in[i])){
            c2+=1;
        }

       }
}

if(len%2==0){

    len=len/2;

}
else{

    len=(len+1)/2;
}
if(c==len &&c2==(in.length()-len)){
    cout<<"Yes";
}
else{

    cout<<"No";
}



}

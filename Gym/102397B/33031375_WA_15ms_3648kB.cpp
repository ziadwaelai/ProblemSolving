#include<iostream>
using namespace std;

int main(){
int  x;cin>>x;
int c=2;
while(c*c<=x){

    if(x%c==0){

        cout<<c<<" "<<x/c;
        return 0;
    }else{
        c++;
    }


}






}


#include<iostream>

using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if(x==y && y==z){
    cout<<"No";
}
else if(x==y|| x==z ||z==y){
    cout<<"Yes";
}else{
        cout<<"No";

}

}


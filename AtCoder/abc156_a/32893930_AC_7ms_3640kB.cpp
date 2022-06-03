#include<iostream>

using namespace std;



int main()
{
int k,x;
cin>>k>>x;
if(k>=10){
    cout<<x;
}else{
    int t=100*(10-k);
    t+=x;
    cout<<t;
}
}



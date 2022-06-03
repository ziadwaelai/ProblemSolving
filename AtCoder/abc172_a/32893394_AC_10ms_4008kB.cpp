#include<iostream>
#include <math.h>
using namespace std;
int main(){
int x ;
int y=0;
cin>>x;
for(int i=1;i<4;i++){
    y+=pow(x,i);
}
cout<<y;
}

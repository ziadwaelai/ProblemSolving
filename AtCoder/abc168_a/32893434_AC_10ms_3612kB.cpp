#include<iostream>
#include <math.h>
using namespace std;
int main(){
string text;
cin>>text;
int len=text.length();
if(text[len-1]=='2'||text[len-1]=='4'||text[len-1]=='5'||text[len-1]=='7'||text[len-1]=='9'){
    cout<<"hon";
} else if(text[len-1]=='0'||text[len-1]=='1'||text[len-1]=='6'||text[len-1]=='8'){
    cout<<"pon";
}else{
cout<<"bon";}
}

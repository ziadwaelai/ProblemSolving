#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string input;
 cin>>input;
 string number;
int len =input.length();
 for(int i=0;i<len;i++){
    if(input[i]!='+'){
    number+=input[i];
    }
 }
sort(number.begin(), number.end());
len=number.length();
for(int i=0;i<len;i++){
    cout<<number[i];
    if(i+1!=len){
        cout<<"+";
    }


}

}

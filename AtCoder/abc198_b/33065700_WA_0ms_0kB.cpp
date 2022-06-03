#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
bool p(string input)
{
    string s=input;
    reverse(input.begin(),input.end());
    if(s==input)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{   int zero=0;
    string num;

    cin>>num;

    for(int i=0;i<num.length();i++){
        if(num[i]=='0'){
             zero++;
        }
    }

    if(zero==0 && num.length()%2!=0 &&p(num) ){
            cout<<"Yes";
    return 0;

    }

    else if(zero==0&& !p(num)){
        cout<<"No";
        return 0;
    }
    else{

    reverse(num.begin(),num.end());

    for(int i=0;i<zero;i++){
            num+='0';

    }
      reverse(num.begin(),num.end());
      if(p(num)){

         cout<<"Yes";
         return 0;}else{cout<<"A7a";}


    }




}


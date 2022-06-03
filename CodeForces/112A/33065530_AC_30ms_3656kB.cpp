#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string f="",s="";
cin>>f>>s;
 transform(f.begin(), f.end(), f.begin(), ::tolower);
 transform(s.begin(), s.end(), s.begin(), ::tolower);
if(std::string(f) > std::string(s)) cout<<1;
else if(std::string(f) < std::string(s)) cout<<-1;
else cout<<0;
}
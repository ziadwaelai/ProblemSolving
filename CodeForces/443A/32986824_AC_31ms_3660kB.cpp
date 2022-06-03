#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

string & removeDuplicate(std::string& str)
{
  int length = str.length();
  for(unsigned int i = 0; i < length; i++)
  {
    char currChar = str[i]; //holds current c
    for(unsigned int j = i+1; j < length; j++)
    {
      if(currChar == str[j])
        str.erase (std::remove(str.begin()+j, str.end(), str[j]), str.end());
    }
  }
  return str;
}
int main()
{
    string s;

    string x;
        string y;

    getline(cin,s);
    for(int i=0;i<s.length();i++){
       if(s[i]!=' '&&s[i]!=','&&s[i]!='}'&&s[i]!='{'){
               x+=s[i];
       }
    }
int len =0;
 len=x.length();
 int c=0;

 y=removeDuplicate(x);
len=y.length();

cout<<len<<endl;

}



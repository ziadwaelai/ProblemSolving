#include <iostream>
#include<string>

using namespace std;


int main()
{
    string s;
    int c=0;
    string x;
        string y;

    getline(cin,s);
    for(int i=0;i<s.length();i++){
       if(s[i]!=' '&&s[i]!=','&&s[i]!='}'&&s[i]!='{'){
               x+=s[i];
       }
    }
y+=x[0];
 for(int i=0;i<x.length();i++){
            for(int j=1+i;j<x.length();j++){
                    if(x[i]==x[j]){
                   c++;
                    }

    }
    }


cout<<x.length()-c<<endl;

}


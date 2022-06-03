#include <iostream>
#include <string>
using namespace std;
int main()
{string number;
int k;
int num;
    cin>>number>>k;
    for(int i=0;i<k;i++){
        if(number[number.length()-1]=='0'){
            num=stoi(number);
           num=num/10;
           number=to_string(num);

        }
        else if (number[number.length()-1]!='0'){
              num=stoi(number);
              num--;
               number=to_string(num);
        }
    }
    cout<<number;

}

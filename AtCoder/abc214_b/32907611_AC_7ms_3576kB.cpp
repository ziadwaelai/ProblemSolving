#include<iostream>
 
using namespace std;
 
 
 
int main()
{
 
int S , T ,a,b,c,resalt=0 ;
cin >> S >> T ;
 
for( a=0;a<=S;a++)
    for( b=0;b<=S;b++)
for ( c =0; c<=S;c++){
          if(a+b+c<=S&&a*b*c<=T)
             resalt ++ ;
}
 
cout << resalt;
 

}
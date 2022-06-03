#include <bits/stdc++.h>
#include<string>
using  namespace  std ;
 int arr[100];
int main()
{
    int n ,k;
    cin>>n>>k;
string odde ,even;

for(int i=1;i<=n;i++){

    if(i%2==0){
        even+=to_string(i);
    }else{
     odde+=to_string(i);
     }
}

string number=odde+even;

cout<<number[k-1];
}

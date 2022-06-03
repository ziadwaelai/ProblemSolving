#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
int len =0;
string result;
while(cin>>n){
if(n==0){break;}
int arr[n];
int totel=0;
int cost=0;

for(int i=0;i<n;i++){
    cin>>arr[i];

}
cost=arr[0];
for(int i=1;i<n;i++){
        cost+=arr[i];
        totel+=cost;

}

result+=to_string(totel);
result+='/';
len =result.length();

}
string num;
for(int i=0;i<len;i++){
        if(result[i]!='/'){
            num+=result[i];
            cout<<stoi(num);
            num="";
        }else{cout<<endl;}


}
}
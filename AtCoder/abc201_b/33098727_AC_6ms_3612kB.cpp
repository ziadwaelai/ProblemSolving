#include<iostream>
#include<algorithm>
using namespace std;
//zee
int main(){

    int n;
    cin>>n;
    int high[n], h[n];
    string s[n];
    for (int i=0; i<n; i++){
        cin>>s[i]>>high[i];
        h[i] = high[i];
    }
    sort (h ,h+n);
    for (int i=0; i<n; i++){
        if (h[n-2] == high[i])
            cout<<s[i];
    }

}


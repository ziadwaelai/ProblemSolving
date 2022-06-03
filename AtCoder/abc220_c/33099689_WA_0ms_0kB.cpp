#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//zee
int main()
{

    long long n;
    cin>>n;
    long long ans =0;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    long long k;
    cin>>k;
    long long o=0;
    int i=0;
    while(ans<=k)
    {

        ans+=arr[i];
        o++;
        if(ans>=k)
        {
            cout<<o;
            return 0;
        }

        if(i==(n-1))
        {
            i=0;
        }
        else
        {
            i++;
        }

    }

}


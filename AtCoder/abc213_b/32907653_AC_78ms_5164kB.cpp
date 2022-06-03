#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=1;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int arr2[n];

    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    sort(arr,arr+n);

    int num;

    num= arr[n-2];

    for(int i =0;i<n;i++)
    {
        if(arr2[i]==num)
        {
            cout<<i+1;
            break;
        }
    }



}

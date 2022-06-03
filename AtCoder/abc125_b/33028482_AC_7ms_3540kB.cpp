#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arrV[20];
    int arrC[20];

    int max=0;
    for(int i=0; i<n; i++)
    {

        cin>>arrV[i];
    }
    for(int i=0; i<n; i++)
    {

        cin>>arrC[i];
    }
    for(int i=0; i<n; i++)
    {
       if(arrV[i]>arrC[i]){
        max+=(arrV[i]-arrC[i]);
       }
    }


        cout<<max;

}

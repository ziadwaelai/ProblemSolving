#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int B;
    cin>>B;
    if (B > (a*6))
    {
        cout<<"No"<<endl;
    }
    else if (B < a)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
}

#include <iostream>
using namespace std ;

int main()
{
    int N ;
    cin >> N ;
    N=int(N*1.08);
    if (N<206)
    {
        cout << "Yay!" ;
    }
    else if (N==206)
    {
        cout << "so-so" ;
    }
    else
    {
        cout << ":(" ;
    }

}

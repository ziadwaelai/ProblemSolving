#include <iostream>
using namespace std;
int main()
{   int A;
    cin >> A;
    for(int i=2;i*i<=A;i++){
            cout << i << " " << A/i <<endl;
            return 0;    
    }


}

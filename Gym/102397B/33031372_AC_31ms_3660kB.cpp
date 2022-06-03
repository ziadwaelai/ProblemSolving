#include <iostream>
using namespace std;
int main()
{   int A;
    cin >> A;
    int x=0,y=0;
    for(int i=2;i*i<=A;i++){
         x=i;
         y=A/i;
            break ;

    }
    if(x*y==A){
        cout<<x<<" "<<y;
    }else{

        cout<<1<<" "<<A;
    }


}

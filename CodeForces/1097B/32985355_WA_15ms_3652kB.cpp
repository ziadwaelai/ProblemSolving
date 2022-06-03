#include<iostream>
using namespace std;
int main()
{
 int n=0;
 cin>>n;
 int arr[n];
    int sum=0;
        int sum1=0;

    int max=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    sum+=arr[i];
        sum1+=arr[i];

    if(arr[i]>max){
        max=arr[i];
    }

}
sum-=max;

if(max-sum==0||sum1==360){
    cout<<"Yes";
}    else{
cout<<"No";}


}












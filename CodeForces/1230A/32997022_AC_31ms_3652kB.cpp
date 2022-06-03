#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[4];
cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
sort(arr, arr + 4);

if ( arr[3] == arr[0] + arr[1] + arr[2] || arr[0] + arr[3] == arr[2] + arr[1] || arr[3] + arr[1] == arr[0] + arr[2])
		{cout << "YES" << endl;}
	else
		{cout << "NO" << endl;}












}

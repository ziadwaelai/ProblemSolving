#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<20;i++){
		string temp=s;
		reverse(s.begin(),s.end());
		if(temp==s){
			cout<<"Yes"<<endl;
			return 0;
		}
		s='0'+temp;
	}
	cout<<"No"<<endl;
return 0;
}
///zee
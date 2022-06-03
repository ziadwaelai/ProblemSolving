#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0) return 0;
		priority_queue<int, vector<int>, greater<int> > q;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		long long sum=0;
		for(int i=0;i<n-1;i++)
		{
			int a=q.top();q.pop();
			int b=q.top();q.pop();
			sum=sum+a+b;
			q.push(a+b);
		}
		cout<<sum<<endl;
	}
}

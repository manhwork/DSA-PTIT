#include<bits/stdc++.h>
using namespace std;
int n , k ;
int x[1000];
void in()
{
	for(int i=1;i<=k;i++)
	{
		cout<<char(x[i]+'A'-1);
	}
	cout<<endl;
}
void ql(int i)
{
	for(int j=x[i-1]+1;j<=n-k+i;j++)
	{
		x[i]=j;
		if(i==k) in();
		else ql(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ql(1);
	}
}

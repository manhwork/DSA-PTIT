#include<bits/stdc++.h>
using namespace std;
int n,s;
int a[10000];
int b[10000];
int sum=0;
int ok=0;
void ql(int i,int pos) {
	for(int j=pos; j<=n; j++) {
		if(sum+a[j]<=s) {
			b[i]=a[j];
			sum+=a[j];
			if(sum==s) {
				ok=1;
				cout<<"[";
				for(int k=1; k<=i-1; k++) {
					cout<<b[k]<<" ";
				}
				cout<<b[i]<<"]";
			} else {
				ql(i+1,j);
			}
			sum-=a[j];
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>s;
		ok=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
		}
		sum=0;
		ql(1,1);
		if(!ok) cout<<"-1";
		cout<<endl;
		memset(b,0,sizeof(b));
	}
}
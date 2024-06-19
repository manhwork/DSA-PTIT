#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m],c[k];
		for(int &x :a) cin>>x;
		for(int &x :b) cin>>x;
		for(int &x :c) cin>>x;
		int i=0,j=0,h=0,ok=0;
		while(i<n and j<m and h<k) {
			if(a[i]==b[j] and a[i]==c[h]) {
				ok=1;
				cout<<a[i]<<" ";
				i++;
				j++;
				h++;
				continue;
			}
			if(a[i]<b[j]) i++;
			else if(b[j]<c[h]) j++;
			else h++;
		}
		if(!ok) cout<<"NO";
		cout<<endl;
	}
}
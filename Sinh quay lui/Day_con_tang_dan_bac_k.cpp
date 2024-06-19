#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000];
int b[1000];
void ktao() {
	for(int i=1; i<=k; i++) a[i]=i;
}
void sinh() {
	int i=k;
	while(i>=1 and a[i]==n-k+i) {
		i--;
	}
	if(i==0) ok=1;
	else {
		a[i]++;
		for(int j=i+1; j<=k; j++) {
			a[j]=a[j-1]+1;
		}
	}
}
int check() {
	for(int i=1; i<=k; i++) {
		if(b[a[i]]>=b[a[i]+1]) return 0;
	}
	return 1;
}
int main() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		cin>>b[i];
	}
	int cnt=0;
	ok=0;
	ktao();
	while(!ok) {
		if(check()==1) {
			cnt++;
		}
		sinh();
	}
	cout<<cnt<<endl;
}
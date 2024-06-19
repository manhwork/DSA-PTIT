#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//7 2
//1 1 2 2 2 2 3
//7 4
//1 1 2 2 2 2 3

void solve() {
	int n,x;
	cin>>n>>x;
	int a[n];
	int b[n];
	memset(b,0,sizeof(b));
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int m : a) {
		b[m]++;
	}
	if(b[x]) cout<<b[x]<<endl;
	else cout<<"-1\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
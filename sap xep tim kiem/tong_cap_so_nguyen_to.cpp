#include <bits/stdc++.h>
using namespace std;
#define ll long long

int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

void solve(){
	int n;
	cin>>n;
	int ok=1;
	for(int i=2;i<=n;i++){
		if(snt(i) and snt(n-i)){
			cout<<i<<" "<<n-i<<endl;
			ok=0;
			break;
		}
	}
	if(ok) cout<<"-1\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
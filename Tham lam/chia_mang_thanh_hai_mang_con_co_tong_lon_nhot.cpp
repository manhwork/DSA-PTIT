#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n,k;
		cin>>n>>k;
		ll a[10000];
		for(ll i=0; i<n; i++) {
			cin>>a[i];
		}
		k=min(n-k,k);
		sort(a,a+n);
		ll s1=0,s2=0;
		for(int i=0; i<k; i++) {
			s1+=a[i];
		}
		for(int i=k; i<n; i++) {
			s2+=a[i];
		}
		cout<<s2-s1<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,s;
ll a[21];
ll ans = LLONG_MAX;
int ok =0;

void ql(ll i,ll sum,ll dem){
	if(sum > s and dem > ans ) return ;
	if(i==n){
		if(sum == s){
			ans = min(ans,dem);
			ok=1;
		}
		return ;
	}
	ql(i+1,sum,dem);
	ql(i+1,sum+a[i],dem+1);
}

int main(){
	int t=1;
	while(t--){
		cin>>n>>s;
		for(int i=0;i<n;i++) cin>>a[i];
		ql(0,0,0);
		if(!ok) cout<<"-1\n";
		else cout<<ans<<endl;
	}
}

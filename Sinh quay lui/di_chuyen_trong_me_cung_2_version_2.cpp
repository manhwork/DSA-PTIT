#include<bits/stdc++.h>
using namespace std;
int n,a[1000][10000];
int ok;
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
string s;
string path="DLRU";
void ql(int i,int j){
	if(i==n && j==n){
		cout<<s<<" ";  ok=1;
	}
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 and i1<=n and j1>=1 and j1<=n and a[i1][j1]){
			s+=path[k];
			a[i1][j1]=0;
			ql(i1,j1);
			a[i1][j1]=1;
			s.pop_back();
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		ok=0;
		s="";
		if(a[1][1] and a[n][n]){
			a[1][1]=0;
			ql(1,1);
		}
		if(!ok) cout<<"-1";
		cout<<endl;
	}
}
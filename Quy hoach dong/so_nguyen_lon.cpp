#include<bits/stdc++.h>
using namespace std;
int f[1005][1005]={0};
int main(){
	int t;
	cin>>t;
	scanf("\n");
	while(t--){
		string n;
		cin>>n;
		string m;
		cin>>m;
		for(int i=1;i<=n.size();i++){
			for(int j=1;j<=m.size();j++){
				if(n[i-1]==m[j-1]){
					f[i][j]=f[i-1][j-1]+1;
				}
				else {
					f[i][j]=max(f[i-1][j],f[i][j-1]);
				}
			}
		}
		cout<<f[n.size()][m.size()]<<endl;
		memset(f,0,sizeof(f));
	}
}
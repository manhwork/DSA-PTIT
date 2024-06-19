#include<bits/stdc++.h>
using namespace std;
int n ,a[10000];
vector<int> tmp;
vector<string> v;
void Try(int i){
	for(int j=i+1;j<=n;j++){
		if(a[j]>a[i]){
			tmp.push_back(a[j]);
			if(tmp.size()>1){
				string s="";
				for(auto k : tmp){
					s+=to_string(k)+" ";
				}
				v.push_back(s);
			}
			Try(j);
			tmp.pop_back();
		}
	}
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	Try(0);
	sort(v.begin(),v.end());
	for(auto x : v){
		cout<<x<<endl;
	}
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
	return a.first<b.first;
}
int main(){
	ll n,k;
	cin>>n>>k;
	vector <pair<ll,ll> > v;
	unordered_map <ll,ll> myland;
	for(ll i=0;i<n;i++){
		ll temp;
		cin>>temp;
		myland[temp]++;
	}
	for( auto itr=myland.begin(); itr!=myland.end(); itr++){//itr=iterator
		v.push_back({ itr->first, itr->second });
	}
	sort(v.begin(),v.end(),cmp);
	ll cnt=0,f=0,ans;
	if(k==0){
		if(v[0].first>=2){
			cout<<v[0].first-1<<endl;
		}else
		cout<<-1<<endl;
		
	}else{
	for(ll i=0;i<v.size();i++){
		// cout<<v[i].first<<" "<<v[i].second<<endl;
		cnt+=v[i].second;
		if(cnt>k){
			f=1;
			break;
		}
		else if(cnt==k){
			ans=v[i].first;
			break;
		}
	}
	if(f==1){
		cout<<-1<<endl;
	}else
	cout<<ans<<endl;}
	return 0;
}

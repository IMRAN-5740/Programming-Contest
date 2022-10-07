#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(n>k){
			cout<<n-k<<endl;
		}else{


		ll dis=abs(n-k);
		ll res=0;
		res=dis/2;
		if(dis%2!=0)
		{
			res+=2;
		}
		cout<<res<<endl;
	}
	}
	return 0;
}
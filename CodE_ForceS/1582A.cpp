#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll x,y,z;
		x=a*1;
		y=b*2;
		z=c*3;
		ll res=x+y+z;
		if(res%2!=0)
		{
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
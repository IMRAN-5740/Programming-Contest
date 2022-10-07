#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll cnt=0;
	if(a<b)cnt++;
	if(a<c)cnt++;
	if(a<d)cnt++;
	cout<<cnt<<endl;	
	}
	return 0;
}
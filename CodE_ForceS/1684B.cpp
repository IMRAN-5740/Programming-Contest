#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll m,n,o,mx,px,lx,cnt=0;
		mx=max(a,max(b,c));
		o=c;
		n=b+o;
		m=n+a;
		// ll x,y,z;
		// ll tx=mx;
		
		// 	px=mx+1;
		// 	lx=tx;
		// 	z=mx%px;
		// 	while(1){
		// 	if((z==(mx%px)) and (a==(px%lx)) and (b==(lx%mx)))
		// 	{
		// 		m=px;
		// 		n=lx;
		// 		o=mx;	
		// 		cnt=1;
		// 		break;
		// 	}
		// 	px++;
		// 	lx++;
		// }
		
		cout<<m<<" "<<n<<" "<<o<<endl;

	}
	return 0;
}
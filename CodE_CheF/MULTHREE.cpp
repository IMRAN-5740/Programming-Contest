#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;

	while(t--)
	{
		ll k,d0,d1;
		cin>>k>>d0>>d1;	
		//string s[k+4];
		//s[0]=to_string(d0);
		//s[1]=to_string(d1);
		//ll arr[k+5];
		//arr[0]=d0;
		//arr[1]=d1;
		ll sum=0;
		//sum=d0+d1;
		//ll ans=d0+d1;
		ll c=(d0+d1)%10;
	    ll d=(2*c)%10,e=(4*c)%10,f=(8*c)%10,g=(6*c)%10;
	    ll k1=k/4,k2=(k-1)/4,k3=(k-2)/4,k4=(k-3)/4;
	    sum=c+d0+d1+k1*d+k2*e+k3*f+k4*g;
		//for(ll i=2;i<k;i++)
		//ll i=2;
		// while(i<k)
		// {

			// for(ll j=0;j<i;j++)
			// {
			// 	 sum=sum+arr[j]%10;
			// }
			//ans=ans+(sum%10);
			//s[i]=to_string(sum%10);
			//sum=((sum)*2)%10;
			//i++;
		//}
		// for(ll p=0;p<k;p++)
		// {
		// 	cout<<arr[p];
		// }
		//cout<<ans<<endl;
		if(sum%3==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		sum=0;
		//cout<<endl;
		// for(ll i=0;i<k;i++)
		// {
		// 	cout<<s[i];
		// }
		//cout<<endl;
	}
	return 0;
}
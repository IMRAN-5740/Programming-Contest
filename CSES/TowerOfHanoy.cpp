#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll cnt;
void TowerOf_Hanoy(ll n,ll beg,ll aux,ll end)
{
	if(n==0)
	{
		//cout<<beg<<" "<<end<<endl;
	//	cnt++;
		return;
	}
	//continue;
	 TowerOf_Hanoy(n-1,beg,end,aux);
	// TowerOf_Hanoy(n,beg,aux,end);
	 cout<<beg<<" "<<end<<endl;cnt++;
	 TowerOf_Hanoy(n-1,aux,beg,end);

}
int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll res=(ll)(pow(2,n)-1);
		cout<<res<<endl;
		TowerOf_Hanoy(n,1,2,3);
		//cout<<cnt<<endl;cnt=0;


	}
	return 0;
}

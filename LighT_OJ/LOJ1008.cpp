#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		ll n,row,col;
		cin>>n;
		ll sqr=ceil(sqrt(n*1.0));
		ll x=(sqr*sqr)-n;
		if(x<sqr)
		{
			row=sqr;
			col=x+1;
		}
		else
		{
			col=sqr;
			row=(n)-((sqr-1)*(sqr-1));
		}

		if(sqr%2==0)
		{
			swap(col,row);
		}
		cout<<"Case "<<i<<":"<<" "<<col<<" "<<row<<endl;
	}
	
	return 0;
}

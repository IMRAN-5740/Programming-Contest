#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)return b;
	if(b==0)return a;
	return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int Pre_GCD[n+1];
		int Post_GCD[n+1];
		int array[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>array[i];
		}
		Pre_GCD[0]=0;
		for(int i=1;i<=n;i++)
		{
			Pre_GCD[i]=gcd(Pre_GCD[i-1],array[i]);
		}
		Post_GCD[n+1]=0;
		for(int i=n;i>=1;i--)
		{
			Post_GCD[i]=gcd(Post_GCD[i+1],array[i]);
		}
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			int ans=gcd(Pre_GCD[l-1],Post_GCD[r+1]);
			cout<<ans<<endl;
		}
	}
	return 0;

}


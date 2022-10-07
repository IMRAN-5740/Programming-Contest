#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int ans=1;
		for(int i=3;i<=n;i+=x)
		{
			//while(i<=n)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
		ans=1;
	}
	return 0;
}
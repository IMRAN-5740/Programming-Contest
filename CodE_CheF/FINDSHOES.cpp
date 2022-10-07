#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		
		int left_S=n;
		int right_S=n;
		if(n<m)
		{
			cout<<n<<endl;
		}
		else
		{
			int res=left_S+right_S-m;
			cout<<res<<endl;
		}
	}
	return 0;
}
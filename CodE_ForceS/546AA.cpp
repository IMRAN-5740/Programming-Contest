#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int res=(w*(w+1))/2;
	int ans=k*res;
	if(ans>n)
	{
			cout<<(ans-n)<<endl;
	}
	else
	{
		cout<<0<<endl;
	}

	return 0;
}
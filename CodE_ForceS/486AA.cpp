#include<bits/stdc++.h>
#define ll long long
using namespace std;
//const ll N = 2e7 + 5;
ll n,i,j,k;
// ll  prefixsum[N];
// ll  prefixsum1[N];
// ll arr[N];
int main()
{
	
	cin>>n;
	// for( i=1;i<=n;i++)
	// {
	// 	arr[i]=i;
	// }
	if(n==1)
	{
		cout<<n*-1<<endl;
	}
	else if(n%2==0)
	{
		// j=1;
		// for(int i=2;i<=n;i+=2)
		// {
		// 	prefixsum[j]=prefixsum[j-1]+arr[i];
		// 	j++;
		// }
		// k=1;
		// for(int i=1;i<=n;i+=2)
		// {
		// 	prefixsum1[k]=prefixsum1[k-1]+arr[i];
		// 	k++;
		// }
		// int res=prefixsum[n/2]-prefixsum1[n/2];
		//cout<<res<<endl;
		cout<<(n/2)<<endl;
	}
	else
	{
		// j=1;
		// for(int i=2;i<=n;i+=2)
		// {
		// 	prefixsum[j]=prefixsum[j-1]+arr[i];
		// 	j++;
		// }
		// k=1;
		// for(int i=1;i<=n+1;i+=2)
		// {
		// 	prefixsum1[k]=prefixsum1[k-1]+arr[i];
		// 	k++;
		// }
		// int res=prefixsum[n/2]-prefixsum1[n/2+1];
		//cout<<res<<endl;
		cout<<(n/2+1)*-1<<endl;
	}
	return 0;
}
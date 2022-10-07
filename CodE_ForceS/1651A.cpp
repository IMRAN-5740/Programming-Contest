// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
// 	llt t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		n=pow(2,n);
// 		ll arr[n+1];
// 		ll brr[n+1];
// 		vector<ll>a,b;
// 		vector<pair<ll,ll>>vc;
// 		// for(int i=1;i<=n;i++)
// 		// {
// 		// 	arr[i]=i
// 		// }
// 		// for(int i=1;i<=n;i+=2)
// 		// {
// 		// 	vc.push_back(i,i+1);
// 		// }
// 		for(int i=1;i<=n;i++)
// 		{
// 			if(i%2==1)
// 			{
// 				a.push_back(i);
// 			}
// 			else
// 			{
// 				b.push_back(i);
// 			}
			
// 		}
// 		for(int i=1;i<=n;i++)
// 		{
// 			ll sum=a[i]+b[i];
// 			if(sum%2==1)
// 			{

// 			}
// 		}

// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		n=pow(2,n);
		if(n%2==0)
		{
			cout<<n-1<<endl;		
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}
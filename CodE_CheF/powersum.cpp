// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		ll arr[n+1];
// 		ll brr[32]={0};
// 		for(ll i=1;i<=30;i++)
// 		{
// 			brr[i]=pow(2,i);
// 		}
// 		for(ll i=1;i<=30;i++)
// 		{
// 			cout<<brr[i]<<" ";
// 		}
// 		cout<<"\n"; 
// 		ll sum=0;
// 		bool cnt=false;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			cin>>arr[i];
// 			sum+=arr[i];
// 		}
// 		for(ll i=1;i<=30;i++)
// 		{
// 			if(sum==brr[i])
// 			{
// 				cnt=true;
// 				break;
// 			}
// 			else
// 			{
				
// 			}
// 		}
// 		if(cnt=true)
// 		{
// 			cout<<0<<endl;
// 		}

// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int  sum=0,i,b,j=1;
		int arr[n];
		int brr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			brr[i]=arr[i];
			sum=sum+arr[i];
			
		}
		sort(arr,arr+n);
		b=ceil(log2(sum));
		auto c=find(brr,brr+n,arr[0]);
		j=((pow(2,b)-sum)+arr[0])/arr[0];
		if((sum & sum-1)==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl;
			cout<<1<<" "<<j;
			cout<<endl;
			cout<<distance(brr,c)+1<<endl;
		}
	}
	return 0;
}
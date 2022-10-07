#include<bits/stdc++.h>
#define ll long long
ll arr[100000];
using namespace std;
int main(){
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll i;
		ll n;
		cin>>n;
		string s;
		s=to_string(n);
		ll len=s.size();
		ll tem=0;
		ll p=1;
		ll z=0;
		for( i=len-1;i>=0;i--)
		{
			tem=n%10;
			if(tem>0)
			arr[z++]=tem*p;
			p*=10;
			n/=10;
			//len--;
		}
		
		ll cnt=0;
		// for( i=0;i<len;i++)
		// {
		// 	if(arr[i]>0){
		// 		cnt++;
		// 	}
		// 	//cout<<arr[i]<<" ";
		// }
		//cout<<cnt<<endl;
		cout<<z<<endl;
		for( i=0;i<z;i++)
		{
			// if(arr[i]>0){
			// 	cnt++;
			// }
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		
	}
	return 0;
}
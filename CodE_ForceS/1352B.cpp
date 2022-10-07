#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		int res,cnt,ans;
		if(n>=k)
		{
			if(n%2==0 && k%2==0)
			{
				for(int i=0;i<k;i++)
				{
					arr[i]=n/k;
				}
				cout<<"YES"<<endl;
				for(int i=0;i<k;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else if(n%2==0 && k%2!=0)
			{
				for(int i=0;i<k-1;i++)
				{
					arr[i]=n/k;
				}
				arr[k-1]=(n%k)+(n/k);
				cout<<"YES"<<endl;
				for(int i=0;i<k;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else if (n%2!=0 && k%2==0)
			{
				cout<<"NO"<<endl;
				
			}
		}
		else{
			cout<<"NO"<<endl;
		}
		

	}
	return 0;	
}
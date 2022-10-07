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

	   int arr[n];

	   for(int i=0;i<n;i++)
	   {
	      cin>>arr[i];
	   }

	   int sum=1;
	   int cnt=0;
	   for(int i=0;i<n-1;i++)
	   {
	        if(arr[i]==0 && arr[i+1]==0){
	            cnt=1;
	            break;
	        }
	   }
	   if(cnt==1)
	   {
	   	 cout<<"-1"<<endl;
	   }
	   else 
	   {
	      if(arr[0]==1)
	        sum++;
	      for(int i=1;i<n;i++)
	      {
	        if(arr[i]==1 && arr[i-1]==1)
	        {
	            sum+=5;
	        }
	        else if(arr[i]==1)
	        {
	            sum++;
	        }
	      }

	      cout<<sum<<endl;
	   }
	}
	return 0;
}
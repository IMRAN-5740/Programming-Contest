#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }
	//cout<<endl;
	double brr[n+1];
	memset(brr,0,sizeof(brr));
	
	double crr[n+1];
	memset(crr,0,sizeof(crr));
	
	double drr[n+1];
	memset(drr,0,sizeof(drr));
	double err[n+1];
	memset(err,0,sizeof(err));
	for(int i=0;i<n;i++)
	{
		if(arr[0]==0 and arr[n-1]==k)
		{
			int  res=abs(arr[i]-arr[i+1]);
			double ans=(double(res)/2);
			brr[i]=ans;
		}
		else if(arr[0]>0 and arr[n-1]<k)
		{
			double val=arr[0]-0;
			crr[0]=val;
			double val1=abs(arr[n-1]-k);
			crr[n]=val1;
			for(int i=0;i<n-1;i++)
			{
				int  res=abs(arr[i]-arr[i+1]);
				double ans=(double(res)/2);
				crr[i+1]=ans;
			}

		}
		else if(arr[0]>0 and arr[n-1]==k)
		{
			double val=arr[0]-0;
			drr[0]=val;
			for(int i=0;i<n-1;i++)
			{
				int  res=abs(arr[i]-arr[i+1]);
				double ans=(double(res)/2);
				drr[i+1]=ans;
			}
		}
		else if(arr[0]==0 and arr[n-1]<k)
		{
			double val1=abs(arr[n-1]-k);
			err[n-1]=val1;
			for(int i=0;i<n-1;i++)
			{
				int  res=abs(arr[i]-arr[i+1]);
				double ans=(double(res)/2);
				err[i]=ans;
			}
		}
	 }
	// for(int i=0;i<n-1;i++){
	// 	cout<<brr[i]<<" ";
	// }
	// cout<<endl;

	//  for(int i=0;i<=n;i++){
	// 	cout<<crr[i]<<" ";
	// }
	//cout<<endl;

	 // for(int i=0;i<n;i++)
	 // {
		// cout<<drr[i]<<" ";
	 // }
		// cout<<endl;

	 sort(brr,brr+n);
	// for(int i=0;i<n-1;i++){
	// 	cout<<brr[i]<<" ";
	// }
	//cout<<endl;

	sort(crr,crr+n+1);
	// for(int i=0;i<=n;i++){
	// 	cout<<crr[i]<<" ";
	// }
	// cout<<endl;

	 sort(drr,drr+n);
	// for(int i=0;i<n;i++){
	// 	cout<<drr[i]<<" ";
	// }
	// cout<<endl;

	sort(err,err+n);
	// for(int i=0;i<n;i++){
	// 	cout<<err[i]<<" ";
	// }
	// cout<<endl;
	

	if(arr[0]==0 and arr[n-1]==k)
	{
		double max=brr[n-2];
		printf("%0.10lf\n",max );
	}
	else if(arr[0]>0 and arr[n-1]<k)
	{
		double max=crr[n];
		printf("%0.10lf\n",max );
	}
	else if(arr[0]>0 and arr[n-1]==k)
	{
		double max=drr[n-1];
		printf("%0.10lf\n",max );
	}
	else if(arr[0]==0 and arr[n-1]<k)
	{
		double max=err[n-1];
		printf("%0.10lf\n",max );
	}
	return 0;
}
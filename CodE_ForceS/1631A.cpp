// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	int n;
// 	int arr[1000000];
// 	int arr2[1000000];
// 	int cnt,cnt1,l;
// 	while(t--)
// 	{
// 		l=INT_MIN;
// 		cin>>n;
// 		for(int i =0;i<n;i++)
// 		{
// 			cin>>arr[i];
// 			if(arr[i]>l)
// 			{
// 				l=arr[i];
// 				cnt=i;
// 			}
// 		}
// 		l=INT_MIN;
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>arr2[i];
// 			if(arr2[i]>l)
// 			{
// 				l=arr2[i];
// 				cnt1=i;
// 			}
// 		}
// 		int res1=*max_element(arr,arr+n);
// 		int res2=*max_element(arr2,arr2+n);
// 		if(res1>res2)
// 		{
// 			for(int i=0;i<n;i++)
// 			{
// 				if(arr[i]<arr2[i])
// 				{
// 					int m=arr[i];
// 					arr[i]=arr2[i];
// 					arr2[i]=m;
// 					//swap(arr[i],arr2[i]);
// 				}
// 			}
// 			cout<<(*max_element(arr,arr+n)*(*max_element(arr2,arr2+n)))<<endl;

// 		}
// 		else if(res1<res2)
// 		{
// 			for(int i=0;i<n;i++)
// 			{
// 				if(arr[i]>arr2[i])
// 				{
// 					int m=arr2[i];
// 					arr2[i]=arr[i];
// 					arr[i]=m;
// 					//swap(arr[i],arr2[i]);
// 				}
// 			}
// 			cout<<(*max_element(arr,arr+n)*(*max_element(arr2,arr2+n)))<<endl;
// 		}
// 		else if(res1==res2)
// 		{
// 			if(cnt1==cnt)
// 			{
// 				cout<<res1*res1<<endl;
// 			}
// 			if(cnt1!=cnt)
// 			{
// 				for(int i=0;i<n;i++)
// 				{
// 					if(arr[i]<arr2[i])
// 					{
// 						int m=arr2[i];
// 						arr2[i]=arr[i];
// 						arr[i]=m;
// 						//swap(arr[i],arr2[i]);

// 					}
// 				}
// 				cout<<(*max_element(arr,arr+n)*(*max_element(arr2,arr2+n)))<<endl;
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
		int arr[n+1];
		int brr[n+1];
		for(int i =0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i =0;i<n;i++)
		{
			
			cin>>brr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]<brr[i])
			{
				swap(arr[i],brr[i]);
			}
		}
		int res=arr[0];
		int res1=brr[0];
		for(int i=1;i<n;i++)
		{
			res=max(res,arr[i]);
			res1=max(res1,brr[i]);
		}
		cout<<res*res1<<endl;
	}
	return 0;
}
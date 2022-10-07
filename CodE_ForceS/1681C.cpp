// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int arr[n+1];
// 		int brr[n+1];
// 		for(int i=1;i<=n;i++)
// 		{
// 			cin>>arr[i];
// 		}
// 		for(int j=1;j<=n;j++)
// 		{
// 			cin>>brr[j];
// 		}
// 		int cnt=0;
// 		int crr[n+1][n+1];
// 		vector<pair<int,int>>ans;
// 		for(int i=1;i<=n;i++)
// 		{
// 			for(int j=1;j<=n-1;j++)
// 			{
// 				if((arr[j]>arr[j+1]) or (brr[j]>brr[j+1]) )
// 				{
// 					swap(arr[j],arr[j+1]);
// 					swap(brr[j],brr[j+1]);
// 					cnt++;
// 					ans.push_back({j,j+1});
// 				}
// 			}
// 		}
// 		int chk=0;
// 		for(int i=1;i<=n-1;i++)
// 		{
// 			if(arr[i]>arr[i+1] or brr[i]>>brr[i+1])
// 			{
// 				chk=1;
// 				break;
// 			}
// 		}
// 		if(chk==1)
// 		{
// 			cout<<-1<<endl;
// 		}
// 		else
// 		{
// 			cout<<ans.size()<<endl;
// 			for(int i=0;i<ans.size();i++)
// 			{
// 				cout<<ans[i].first<<" "<<ans[i].second<<endl;
// 			}
// 		}

// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+3],brr[n+3];
        for(int i=1;i<=n;i++)cin>>arr[i];
        for(int i=1;i<=n;i++)cin>>brr[i];
        vector<pair<int,int> >ans;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[j]>arr[j+1] || brr[j]>brr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    swap(brr[j],brr[j+1]);
                    ans.push_back({j,j+1});
                }
            }
        }
        int chk=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i+1] || brr[i]>brr[i+1])
            {
                chk=-1;
                break;
            }
        }
        if(chk!=0)
        	{
        		cout<<-1<<endl;
        	}
        else
        {
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++)
            	{
            		cout<<ans[i].first<<" "<<ans[i].second<<endl;
            	}
        }
    }
    return 0;
}

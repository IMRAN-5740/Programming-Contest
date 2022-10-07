// #include<bits/stdc++.h>
// using namespace std;
// int arr[200005];
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int res=4*n-1;
// 	map<int,int>mp;
// 	for(int i=1;i<=res;i++)
// 	{
// 		cin>>arr[i];
// 		mp[arr[i]]++;
// 	}
// 	int x=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		cout<<mp[i]<<" ";
	
// 	}
// 	x=mp[arr[1]];
// 	for(int i=2;i<=n;i++)
// 	{
// 		x=min(x,mp[arr[i]]);
// 	}

// 	cout<<endl;
// 	cout<<x<<endl;
// 	cout<<mp[arr[x]]<<endl;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() 
{
        int i,j,x,y,n;
        cin>>n;
         map<int,int>mp;
          n=n*4-1;
         int a[n+3];
          for(i=0;i<n;i++){
             cin>>a[i];
              mp[a[i]]++;
          }
        for(i=0;i<n;i++)
        {
            if(mp[a[i]]%4!=0) 
            {
              cout<<a[i]<<endl;
              return 0;
            }
        }
  return 0;
}
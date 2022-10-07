#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =1e5+2;
int arr[N];
int brr[N];
vector<int>vc;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int j=1;
		for(int i=1;i<=n;i++)
		{
			if(arr[i]<x)
			{
				int p=i;
				vc.push_back(p);
				brr[j]=p;
				j++;
			}
		}
		int len=vc.size();
		int cnt=0;
		for(int i=0;i<len;i++)
		{
			cnt=max(cnt,vc[i]);
		}

		cout<<cnt<<endl;
		cnt=0;
		vc.clear();

	}
}
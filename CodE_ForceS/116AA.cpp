#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int arr[N];
int brr[N];
int crr[N];
int cnt;
int ans;
int main()
{
	int n;
	cin>>n;

	while(n--)
	{
		int a,b;
		cin>>a>>b;
		ans=ans-a+b;
		cnt=max(ans,cnt);
	}
	cout<<cnt<<endl;
	return 0;
}
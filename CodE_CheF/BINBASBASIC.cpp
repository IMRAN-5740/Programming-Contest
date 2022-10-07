#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int low=0;
		int high=n-1;
		int cnt=0;
		while(low<high)
		{
			if(s[low]!=s[high])
			{
				cnt++;
			}
			low++;
			high--;
		}
		if(n%2)
		{
			if(cnt<=k)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			if(cnt<=k and (k-cnt)%2==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}

	}
	return 0;
}
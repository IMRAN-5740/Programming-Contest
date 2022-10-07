#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{int n;
			cin>>n;
			int cnt=0;
			while(n%2==0)
			{
				cnt++;
				n=n/2;
			}
			cout<<cnt<<endl;
		}
}
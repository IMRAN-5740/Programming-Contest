#include<bits/stdc++.h>
#define dd double
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		dd n;
		cin>>n;
		//cout<<floor(n)<<endl;
		//cout<<ceil(n)<<endl;
		dd res=0.143*n;
		dd cnt=pow(res,n);
		int tt=cnt;
		dd sub=cnt-tt;
		if(sub<0.5)
		{
			cout<<floor(cnt)<<endl;
		}
		else
		{
			cout<<tt+1<<endl;
		}
	}
}
//  (0.143⋅N)N
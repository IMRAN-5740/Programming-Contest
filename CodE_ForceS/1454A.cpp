#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<vc.size();i++)
		{
			vc.clear();
		}
		int n;
		cin>>n;

		for(int i=1;i<=n;i++)
		{
			vc.push_back(i);
		}
		if(n%2==1)
		{
			cout<<vc[(n/2)]<<" ";
		}

		sort(vc.begin(),vc.end());
		reverse(vc.begin(),vc.end());
		for(int j =0 ;j<vc.size();j++)
		{
			if((j+1)==vc[j])
			{
				cout<<"";
			}
			else
			cout<<vc[j]<<" ";
		}
		cout<<endl;

	}
}
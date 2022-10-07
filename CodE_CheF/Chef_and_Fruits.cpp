#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int cnt=0,cnt1=0;
		while(k!=0)
		{


			if(n>m)
			{
				m++;
			}
			else if(n<m)
			{
				n++;
			}
			k--;
		}
		cout << abs(n - m) <<endl;
		
	}

	return 0;
}

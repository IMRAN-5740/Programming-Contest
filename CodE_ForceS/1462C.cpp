#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		string ans = "";
		if(x>45)
		{
			cout<<-1<<endl;
		}
		else if (x<=45)
		{
			if(x<10)
			{
			cout<<x<<endl;
			}
			else
			{
				int curNum = 9;
	            while(x)
	            {
	                while(x-curNum < 0) 
	                	curNum--;
	                ans = ans+(char)(curNum + '0');
	                x = x-curNum;
	                curNum--;
				}
				reverse(ans.begin(),ans.end());
				cout<<ans<<endl;
			}
		}
	}
	
	return 0;
}
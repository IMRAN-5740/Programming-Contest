#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	deque<int>vec;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		vec.push_back(x);
	}
	//sort(vec.begin(),vec.end(),greater<int>());
	// for(int i=0;i<vec.size();i++)
	// {
	// 	cout<<vec[i]<<" ";
	// }
	// cout<<endl;
	// cout<<vec.size()<<endl;
	int sum=0;
	int sum1=0;
	// for(int i=0;i<vec.size();i+=2)
	// {
	// 	sum+=vec[i];
	// }
	// for(int i=1;i<vec.size();i+=2)
	// {
	// 	sum1+=vec[i];
	// }
	int pos=0;
	while(!vec.empty())
	{
		if(pos%2==0)
		{
				if(vec.front()>vec.back())
				{
					sum+=vec.front();
					vec.pop_front();

				}
				else
				{
					sum+=vec.back();
					vec.pop_back();
				}
		}
		else
		{
				if(vec.front()>vec.back())
				{
					sum1+=vec.front();
					vec.pop_front();

				}
				else
				{
					sum1+=vec.back();
					vec.pop_back();
				}
		}
		pos++;
		
	}
	cout<<sum<<" "<<sum1<<endl;
}
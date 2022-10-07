#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=0,cnt=0;
	cin>>n;
	while (cnt<=n)
	{
		i++;
		cnt += (i*(i+1))/2;
	}
	cout<<i-1<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	int arr[n+1];
	for (int i=1;i<=n;i++)
	{
		cin >>arr[i];
		if (arr[i]==1)
		{
			k++;
		}
	}
	printf("%d\n",k);
	return 0;
}
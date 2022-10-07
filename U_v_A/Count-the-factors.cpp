#include<bits/stdc++.h>
using namespace std;
set<int>st;
void PrimeFactorization(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{	
		st.insert(i);
			while(n%i==0)
			{	
				n=n/i;
			}
		}
	}
	if(n>1)
	st.insert(n);
	cout<<st.size()<<endl;
	st.clear();
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		cout<<n<<" : ";
		PrimeFactorization(n);
	}
	return 0;
}
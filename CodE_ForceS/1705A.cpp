#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		int n,x;
    cin>>n>>x;
    int a[2*n];
 
    for(int i=0;i<(2*n);i++)
    {
      cin>>a[i];
    }
 
    sort(a,a+(2*n));
 
    int k=0;
    for(int i=n;i<(2*n);i++)
    {
      if((a[i]-a[i-n])<x)k=1;
    }
    if(k==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	}
	return 0;
}
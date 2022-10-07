#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	int n;
	cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    int ans = 0, mx=a[n-1];

    for (int i=n-2;i>=0;i--) 
    {
        if (a[i] > mx) 
        {
            ++ans;
            mx = a[i] ;
            //cout<<mx<<" ";
        }
    }
    cout << ans << endl;
	}
	return 0;
}
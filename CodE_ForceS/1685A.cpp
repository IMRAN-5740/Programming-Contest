#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        	cin >> a[i];
        sort(a.begin(),a.end());
        int j = 0;
        vector<int> ans(n);
        for(int i = 0; i < n; i += 2) 
        {
            ans[i] = a[j++];
        }
        for(int i = 1; i < n; i += 2) 
        {
            ans[i] = a[j++];
        }
        a = ans;
        int f = 0;
        for(int i = 0; i < n; i++) 
        {
            if (a[i] < a[(i + 1) % n] && a[i] < a[(!i ? n - 1 : i - 1)]) continue;
            else if (a[i] > a[(i + 1) % n] && a[i] > a[(!i ? n - 1 : i - 1)]) continue;
            else 
            {
                f=1;
                break;
            }
        }
        if(!f){
        cout << "YES"<<endl;
        for(auto i : a)
            cout << i << ' ';
        cout << endl;
        }
        else cout<<"NO"<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	int  t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		if(n==1 && k==1){
			cout<<0<<endl;
		}
		else if (k==1)
		{
			cout<<n-1<<endl;
		}
		else 
		{
        ll cur = 1, hour = 0;
        while(cur < n and cur < k) 
        {
            cur *= 2;
            hour++;
        }

        if(n > cur) 
        {
            n = n-cur;
            hour = hour + (n/ k) + (n % k ? 1 : 0);
        }
        cout << hour << endl;
		}
	}

	return 0;

}
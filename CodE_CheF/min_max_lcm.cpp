#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		
		ll n,k;
		cin>>n>>k;
		ll ans=0;
		ans=n*k;
		ll range=ans-n;
		ll a,b,gcd,lcm;
		a=n;
		b=range;
		// for (ll i = 1; i <= a && i <= b; ++i) 
		// {
        
  //       // check if i is a factor of both integers
  //       if (a % i == 0 && b % i == 0)
  //           gcd = i;
  //   	}

  //   	lcm = (a * b) / gcd;
    	//minimum lcm done
    	//cout<<"Minimum LCM "<<lcm<<endl;
    	//maximum lcm done
    	lcm=n*2;
    	ll max=ans*(ans-1);
    	//cout<<"Maximum LCM "<<max<<endl;
    	cout<<lcm<<" "<<max<<endl;
	}
	return 0;

}
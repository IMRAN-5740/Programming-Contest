#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;cin>>n>>m;
		map<ll,ll>mp;
		for(ll i=0;i<n;i++)
		{
			ll x;cin>>x;
			ll y=x%m;
			mp[y]++;
		}
		ll cnt=0;
		for(auto it:mp)
		{
			if(it.first==0 and it.second>0)cnt++;
			else if(mp.count(m-it.first)==0)cnt+=it.second;
			else if ((m-it.first)==it.first)cnt++;
			else if((m-it.first)>it.first)
			{
				ll a=it.second;
				ll b=mp[m-it.first];
				if(abs(a-b)<=1)cnt++;
				else if(a>b)
				{
					a=a-(b+1);
					cnt++;
					cnt=cnt+a;
				}
				else
				{
					b=b-(a+1);
					cnt++;
					cnt=cnt+b;
				}
			}
		}
		cout<<cnt<<endl;

	}
	return 0;
}

//     ll total=0;
//     for(auto i : mp){
//         if(i.first==0 && i.second>0) total++;
//         else if(mp.count(m-i.first)==0) total+=i.second;
//         else if(m-i.first == i.first){
//             total++;
//         } 
//         else if(m-i.first>i.first){
//             ll a=i.second;
//             ll b=mp[m-i.first];
//             if(abs(a-b)<=1) total++;
//             else if(a>b){
//                 a-=(b+1);
//                 total++;
//                 total+=a;
//             }
//             else{
//                 b-=(a+1);
//                 total++;
//                 total+=b;
//             }
//         }
//     }
//     cout<<total<<"\n";
// }
                
// int main(){
//     ios::sync_with_stdio(0);
//             cin.tie(0);
//             cout.tie(0);
//             cout<<fixed;
//             cout<<setprecision(10);
//     //        freopen("timber_input.txt", "r", stdin);
//     //        freopen("timber_output.txt", "w", stdout);
//             int t=1;
//             cin>>t;
//             for(int i=1;i<=t;i++){
//             //    cout<<"Case #"<<i<<": ";  
//                 solve();
//     }
//     return 0;
// }
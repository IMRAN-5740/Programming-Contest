// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		ll num=0,digit=9;
// 		while(n>0 and digit>0)
// 		{
// 			 if(digit<=n)
// 			 {
// 			 	num=num*10;
// 			 	num=num+digit;
// 			 	n=n-digit;
// 			 }
// 			 digit--;
// 		}		
// 		//cout<<num<<endl;
// 		string s=to_string(num);
// 		reverse(s.begin(),s.end());
// 		cout<<s<<endl;
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<(100-n)<<endl;
	}
	return 0;
}
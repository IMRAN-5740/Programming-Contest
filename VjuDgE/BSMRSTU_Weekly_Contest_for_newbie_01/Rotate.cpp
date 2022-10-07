#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll a,b,c;
		ll res=0;
			a=s[0]-'0';
			b=s[1]-'0';
			c=s[2]-'0';
			// vector<int>vc;
			// vc.push_back(a);
			// vc.push_back(b);
			// vc.push_back(c);
			// res=(vc[0]*100)+(vc[1]*10)+vc[2];
			// cout<<res<<endl;
			// ll p=vc.pop_back();
			ll res1=(a*100)+(b*10)+c;
			ll res2=(c*100)+(a*10)+b;
			ll res3=(b*100)+(c*10)+a;
			cout<<(res1+res2+res3)<<endl;

			
		

	}
	return 0;
}

// use proconio::input;
// fn main() {
//     input! {
//         n: usize
//     }

//     let a = n / 100;
//     let b = (n / 10) % 10;
//     let c = n % 10;

//     println!(
//         "{}",
//         100 * a + 10 * b + c + 100 * b + 10 * c + a + 100 * c + 10 * a + b
//     );
// }

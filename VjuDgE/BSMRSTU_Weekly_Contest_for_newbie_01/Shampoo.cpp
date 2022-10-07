#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
			ll v,a,b,c;
			cin>>v>>a>>b>>c;
			ll va=a;
			ll vb=va+b;
			ll vc=vb+c;
			while(1)
			{
				if(a>v)
				{
					cout<<"F"<<endl;
					break;
				}
				v=v-a;
				if(b>v)
				{
					cout<<"M"<<endl;
					break;
				}
				v=v-b;
				if(c>v)
				{
					cout<<"T"<<endl;
					break;
				}
				v=v-c;
			}

	}
	return 0;
}
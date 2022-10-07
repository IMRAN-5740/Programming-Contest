// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// 	cin>>t;
// 	vector< pair <int,int> > vect;
// 		ll n,h,m;
// 	while(t--)
// 	{	
// 		cin>>n>>h>>m;
// 		ll res=(h*60)+m;
// 		for(ll i=0;i<n;i++)
// 		{
// 			ll h1,m1;
// 			cin>>h1>>m1;

// 			vect.push_back( make_pair(h1,m1));
        	
// 		}
// 		sort(vect.begin(), vect.end());
// 		// for (int i=0; i<n; i++)
// 		//     {
// 		//         cout << vect[i].first << " "<< vect[i].second << endl;
// 		//     }

// 		    if(h== vect[0].first and m==vect[0].second)
// 		    {
// 		    	cout<<0<<" "<<0<<endl;
// 		    }
// 		    // else
// 		    // {
// 		    // 	if(h<vect[0].first and m>vect[0].second )
// 		    // 	{
// 		    // 		ll valh=vect[0].first-h-1;
// 		    // 		ll valm=60+vect[0].second-m;
// 		    // 		cout<<valh<<" "<<valm<<endl;
// 		    // 	}
// 		    // 	else if( h<vect[0].first and  m<vect[0].second)
// 		    // 	{
// 		    // 		ll valh=vect[0].first-h-1;
// 		    // 		ll valm=60+vect[0].second-m;
// 		    // 		cout<<valh<<" "<<valm<<endl;
// 		    // 	}
// 		    // 	else if(h<vect[0].first and  m<vect[0].second)
// 		    // 	{
// 		    // 		ll valh=vect[0].first-h;
// 		    // 		ll valm=vect[0].second-m;
// 		    // 		cout<<valh<<" "<<valm<<endl;
// 		    // 	}
// 		    // 	else  
// 		    // 	{
		    		
// 		    // 		ll valh=23-h;
// 		    // 		ll  valm=60-m;
// 		    // 		ll res=vect[0].first+valh;
// 		    // 		ll res1=vect[0].second+valm;
// 		    // 		if(res1>=60)
// 		    // 		{
// 		    // 			res++;
// 		    // 			res1=res1-60;
// 		    // 			cout<<res<<" "<<res1<<endl;
// 		    // 		}
// 		    // 		else
// 		    // 		{
// 		    // 			cout<<res<<" "<<res1<<endl;
// 		    // 		}

// 		    // 	}
// 		    // }
// 		    // for (int i=0; i<n; i++)
// 		    // {
// 		    //     vect.clear();
// 		    // }

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
		ll n,h,m;	cin>>n>>h>>m;
		ll prev=(h*60)+m;
		ll mod=INT_MAX;
		while(n--)
		{
			ll h1,m1;	cin>>h1>>m1;
			ll val=(h1*60)+m1;
			if(val>prev)
			{
				ll res=val-prev;
				mod=min(mod,res);
			}
			else if(val<prev)
			{
				ll res=(24*60)+val-prev;
				mod=min(mod,res);
			}
			else
			{
				ll res=val-prev;
				mod=min(mod,res);
			}

		}	
	
		ll hour=mod/60;
		ll minute=mod%60;
		cout<<hour<<" "<<minute<<endl;
	}
	return 0;
}
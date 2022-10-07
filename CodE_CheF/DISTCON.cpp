#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ds1,ds2,ds3,ds4,ds5,ds6;
int main()
{
	ll d;
	cin>>d;
	{

			ll x1=0;
			ll y1=0;
			
			ll x2=y1;
			ll y2=x1+d;
			
			ll x3=y2;
			ll y3=x2+d;
			
			ll x4=y3;
			ll y4=x3+d;

			ds1=abs(x2-x1)+abs(y2-y1);
			ds4=abs(x4-x2)+abs(y4-y2);
			ds5=abs(x3-x4)+abs(y3-y4);
			ds3=abs(x3-x1)+abs(y3-y1);
			ds2=abs(x3-x2)+abs(y3-y2);
			ds6=abs(x4-x1)+abs(y4-y1);
			if(ds1==ds2 and ds1==ds3 and ds1==ds4 and ds1==ds5 and ds1==ds6 and ds2==ds3 and ds2==ds4 and ds2==ds5 and ds2==ds6 and ds3==ds4 and ds3==ds5 and ds3==ds6 and ds4==ds5 and ds4==ds6 and ds5==ds6)
			{
				cout<<x1<<" "<<y1<<endl;
				cout<<x2<<" "<<y2<<endl;
				cout<<x3<<" "<<y3<<endl;
				cout<<x4<<" "<<y4<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	return 0;

}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int D;
    cin>>D;
    if(D%2!= 0)
    {
        cout<<-1<<endl;
    }
    else{
    vector<pair<long long int,long long int>> v;
    v.push_back({0,D/2});
    v.push_back({D/2,0});
    v.push_back({-(D/2),0});
    v.push_back({0,-(D/2)});
    
    for(auto x: v)
    cout<<x.first<<" "<<x.second<<endl;
    }
}

        #include<bits/stdc++.h>
        #define ll long long
        using namespace std;
        int main()
        {
            ll t;
            cin>>t;
            while(t--)
            {
                ll a,b;
                cin>>a>>b;
                if(a==1 or b==1)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    ll res=__gcd(a,b);
                    if(res!=1)
                    {
                        cout<<0<<endl;
                    }
                    else
                        cout<<1<<endl;
                }
            }
            return 0;
        }
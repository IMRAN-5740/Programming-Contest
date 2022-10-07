#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mn=100;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==1)odd++;
            else
            {
                even++;
                int cnt=0;
                while(x%2==0)
                {
                    cnt++;
                    x/=2;
                }
                mn=min(mn,cnt);
            }
        }
        if(odd!=0)cout<<even<<endl;
        else cout<<mn+(even-1)<<endl;
    }
}

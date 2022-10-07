//Mohammad Imran 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+3];
        vector<int>odd,even,v1,v2;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==1)
            {
                odd.push_back(ar[i]);
                v2.push_back(ar[i]);
            }
            else
            {
                even.push_back(ar[i]);
                v1.push_back(ar[i]);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==even and v2==odd)
            {
                cout<<"Yes"<<endl;
            }
        else 
            {
                cout<<"No"<<endl;
            }
    }
    return 0;
}

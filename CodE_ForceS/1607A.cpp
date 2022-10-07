#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l2,s=0;
        string s1,s2;
        cin>>s1>>s2;
        l2=s2.size();
        vector<int>a;
        for(int i=0;i<l2;i++)
        {
            for(int j=0;j<26;j++)
            {
                 if(s2[i]==s1[j])
                    a.push_back(j+1);
            }

        }
        if(l2==1) cout<<"0"<<endl;
        else
        {
            for(int i=1;i<a.size();i++)
            {
                s=s+abs(a[i]-a[i-1]);
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
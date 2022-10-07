#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        string s,s1;
        cin>>s>>s1;
        int len1=s.size();
        int len2=s1.size();
        int cnt=0;
        for(int j=0;j<len1;j++)
        {
            if(s.compare(j,len2,s1)==0)
            {
                cnt++;
            }
        }
    printf("Case %d: %d\n",i+1,cnt);
    }
    return 0;
}
    

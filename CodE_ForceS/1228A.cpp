#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    
    
    for(int i=l;i<=r;i++)
    {
        int x=i;
        set<int > s;
        int cnt=0;
        while(x)
        {
            cnt++;
            s.insert(x%10);
            x=x/10;
        }
        if(s.size()==cnt)
        {
            cout<<i<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;
    return 0;
}
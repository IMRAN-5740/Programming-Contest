#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,i;
        cin>>n;
        int value;
        vector<long> l,c;
        for(i=0; i<n; i++)
        {
            cin>>value;
            c.push_back(value);
        }
        for(i=0; i<n; i++)
        {
            cin>>value;
            l.push_back(value);
        }
        long min=c[0];
        long sum=c[0]*l[0];
        for(i=1; i<n; i++)
        {
            if(c[i]<min)
                min=c[i];
            sum=sum+l[i]*min;
        }
        cout<<"\n"<<sum;
    }
    return 0;
}

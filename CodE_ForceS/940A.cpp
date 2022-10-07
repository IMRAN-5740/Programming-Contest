#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val,n,d;
    cin >> n >> d;
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        cin >> val;
        vc.push_back(val);
    }
    sort(vc.begin(),vc.end());
    
    int pos = INT_MAX;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           if(d>=(vc[j]-vc[i]))
            {
               pos = min(pos,n-j+i-1);
            }
        }
    }
    cout << pos << endl;

    return 0;
}

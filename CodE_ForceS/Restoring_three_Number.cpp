#include<bits/stdc++.h>
//#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> a(4);
    for ( int i=0; i<4; i++)
    {
        cin >> a[i];
        //a.push_back(i);
    }
    sort (a.begin(),a.end());
    int k=a[3]-a[0];
    int m=a[3]-a[1];
    int l=a[3]-a[2];
    cout<<k<<" "<<m<<" "<<l<<endl;
    return 0;
}
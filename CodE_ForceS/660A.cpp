#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 

    int n; cin >> n ;
    vector <int> a(n), res;
    for (int i=0;i<n;++i) cin >> a[i] ;
    for (int i=0;i<n-1;++i)
    {
        res.push_back(a[i]) ;
        if (__gcd(a[i], a[i+1]) > 1) 
        {
            res.push_back(1) ;
        }
    }
    res.push_back(a[n-1]) ;
    cout << res.size()-n << endl;
    for (auto ii: res) cout << ii << " " ;
    cout << endl;
    return 0;
}

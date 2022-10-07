#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
 
    int n, k;
    cin >> n >> k;
    vector<int> arr(k + 1, 0);
    for(int i = 1; i <= n; i++) 
    {
        int x;
        cin >> x;
        arr[x] ^= 1;
    }
    int ans = 0;
    for(int i = 1; i <= k; i++) 
    {
        ans += arr[i];
    }
    cout << n - (ans)/2;
    return 0;
}


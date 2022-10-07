#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    int side = min(max(a * 2, b), max(a, b * 2));
    return side * side;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) 
    {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
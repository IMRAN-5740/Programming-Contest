#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n], i, pos = -1;
        bool okl = true, okr = true;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
                pos = i;
        }
        for(i = 1; i < n; i++)
        {
            okl &= (arr[(pos - i + n) % n] == i + 1);
            okr &= (arr[(pos + i + n) % n] == i + 1);
        }
        if(okl || okr)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

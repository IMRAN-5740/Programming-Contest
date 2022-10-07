#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  t;
	cin>>t;
	while(t--)
	{
		
		int l, r, k;
        cin >> l >> r >> k;
        int ctr = 0;
        if (l == r)
        {
            if (l > 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
            ctr++;
        }
        int res = (r - l + 1) / 2;
        if ((l % 2 != 0) && (r % 2 != 0))
        {
            res++;
        }
        if (ctr == 0)
        {
            if (res > k)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
	}
	return 0;
}


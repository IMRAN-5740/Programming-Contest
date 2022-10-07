#include<bits/stdc++.h>
using namespace std;

void solve () 
{
	int a, b;
	cin >> a >> b;
	if(a == 0 && b == 0) 
	{
		cout << 0;
	}
	else 
	{
		int x = a * a, y = b * b;
		int t = sqrt (x + y);
		if (t*t == x + y)
		{
			cout <<1;
		}
		else 
		{
			cout << 2;}
		}

		cout << endl;
	}
int main()
{
    int test;
    cin >> test;
    while(test--) 
    {
        solve();
    }
    return 0;
}
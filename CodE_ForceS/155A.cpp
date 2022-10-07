#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;cin >> n;
	int min = 0, max = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		int x;cin >> x;
		if (i==0)
		{
			min = max = x;
		}
		else if (x>max)
		{
			max = x;
			++count;
		}
		else if (x<min)
		{
			min = x;
			++count;
		}
 
	}
	cout << count << endl;
}
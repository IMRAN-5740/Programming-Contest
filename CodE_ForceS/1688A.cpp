#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int findSmallestNonZeroY(int A_num)
{


	string A_binary = bitset<8>(A_num).to_string();
	int B = 1;
	int length = A_binary.size();
	int no_ones = __builtin_popcount(A_num);

	if (length == no_ones )
		return A_num + 1;

	for (int i=0;i<length;i++)
	{
			char ch = A_binary[length - i - 1];

			if (ch == '0')
			{
				B = pow(2.0, i);
				break;
			}
		}
	return B;
}

int main()
{
	int x;
	cin>>x;
	int X = findSmallestNonZeroY(x);
	cout << X;
}
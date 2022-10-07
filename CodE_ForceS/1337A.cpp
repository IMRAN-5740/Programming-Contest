#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
        cin>>t;
	string s;
	while(t--){
		cin>>s;
		int len=s.size();

		for (int i = 0; i < len-1; i+=2) 
                {
			cout<<s[i];
		}
		cout<<s[len-1]<<endl;;
	}
	return 0;
}
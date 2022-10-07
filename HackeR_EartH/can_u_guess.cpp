#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for (int i=1;i<=t;i++){
		int s=0;
		cin>>n;
		for (int j=1;j<n;j++){
			if(n%j==0){
			s=s+j;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
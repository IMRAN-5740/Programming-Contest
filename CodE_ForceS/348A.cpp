#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,a,m=0,count=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a;
		if(a>m)
		 m=a;
		count=count+a;
	}
	a=ceil((double)count/(n-1)), a=max(a, m);
	printf("%lld",a);
	return 0;
}
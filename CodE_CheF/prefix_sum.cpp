#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,mul;
	while(scanf("%d",&n)!=EOF){
		if (n==0){
			break;
		}else
		 mul=n*n;
		cout<<n<<" "<<mul<<endl;
	}
	return 0;
}
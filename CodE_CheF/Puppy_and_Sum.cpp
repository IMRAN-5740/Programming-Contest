#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int d,n,sum=0,res=0;
		cin>>d>>n;
		while(d--)
		{
			sum=0;
			for(int i=1;i<=n;i++)
			{
			sum+=i;
			}
			n=sum;
			//sum=0;
		}
		
		//res=(n*(n+1))/2;
		cout<<sum<<endl;
		//sum=0;
	}
	return 0;
}
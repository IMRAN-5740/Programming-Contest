// #include<bits/stdc++.h>
// using namespace std;

// int GCD(int a,int b)

// {	if(a==b)return a;
// 	if(a==0)return b;
// 	if(b==0)return a;
// 	if(a>b) 
// 		return GCD(a-b,b);
// 	else 
// 		return GCD(a,b-a);
		
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int ans=0;
// 	int x;
// 	for(int i=0;i<n;i++)
// 		{	cin>>x;
// 			ans=GCD(ans,x);
// 		}
// 		cout<<ans*n<<endl;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		ans=__gcd(ans,x);
	}
	cout<<ans*n<<endl;
	return 0;
}
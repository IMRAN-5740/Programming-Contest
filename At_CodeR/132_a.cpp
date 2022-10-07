// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int arr[n+1];
// 	int brr[n+1];
// 	for(int i=1;i<=n;i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	for(int j=1;j<=n;j++)
// 	{
// 		cin>>brr[j];
// 	}
// 	int q;
// 	cin>>q;
// 	int cntdot=0;
// 	int cnthash=0;
// 	int r[q+1],c[q+1];
// 	for(int i=1;i<=q;i++)
// 	{
		
// 		cin>>r[i]>>c[i];
// 	}
// 		for(int i=1;i<=q;i++)
// 		{
// 					for(int i=1;i<=q;++i)
// 					{
// 					   if(n-arr[r[i]-1]<brr[c[i]-1])
// 					   {
// 					     cout<<'#';
// 					   }
// 					   else
// 					   {
// 					     cout<<'.';
// 					   }
// 					}
// 		}
// //	}
// 	//cout<<cntdot<<" "<<cnthash<<endl;
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std; 

int main(){
 int n;  cin>>n;
 int R[n],C[n];
 for(int i=0;i<n;i++)
 	{
 		cin>>R[i];
 	}
 for(int i=0;i<n;i++)
 	{
 		cin>>C[i];
 	}
 int q; 
 cin>>q;
 int r[q],c[q];
 for(int i=0;i<q;++i)
 {
   cin>>r[i]>>c[i];
 }
 for(int i=0;i<q;++i)
 {
   if(n-R[r[i]-1]<C[c[i]-1])
   {
     cout<<'#';
   }
   else
   {
     cout<<'.';
   }
 }

 return 0;
}
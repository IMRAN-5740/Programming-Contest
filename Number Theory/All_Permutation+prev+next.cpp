#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "; 
			}
	cout<<endl;
}
void Permutation(int arr[],int n)
{
	sort(arr,arr+n);
	do
	{
		solve(arr,n);
	}
	while(next_permutation(arr,arr+n));
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Permutation(arr,n);
	return 0;
}
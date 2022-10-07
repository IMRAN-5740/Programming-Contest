#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int q[]={3,5,7,20};
	bitset<10>b;
	b[0]=1;
	for(int i=0;i<4;i++)
	{
		b|=(b<<arr[i]);
		cout<<b<<endl;
	}
	for(int i=0;i<4;i++)
	{
		cout<<q[i]<<" -->";
		if(b[q[i]])
		{
			cout<<"Subset sum exists"<<endl;
		}
		else
			cout<<"Subset Sum is not exists"<<endl;
	}
	
	
	return 0;
}
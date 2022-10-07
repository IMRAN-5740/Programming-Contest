// #include<bits/stdc++.h>
// using namespace std;

// bool Prime[90000001];
// int n=90000000;
// vector<int>V;
// void sieve ()
// {
	
// 	//memset(Prime,0,sizeof(Prime));
// 	for(int i=2;i*i<=n;i++)
// 	{
// 		if(Prime[i]==false)
// 		{
// 			for(int j=i*i;j<=n;j=j+i)
// 			{
// 				Prime[j]=true;
// 			}
// 		}
// 	}
// 	for(int i=2;i<=n;i++)
// 	{
// 		if(Prime[i]==false)
// 		{
// 			V.push_back(i);
// 		}
// 	}
// }
// int main()
// {
// 	sieve();
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		cout<<V[n-1]<<endl;
// 	}
// 	return 0;

// }

#include<bits/stdc++.h>
using namespace std;
vector<int> Vec;
int n=90000000;
bool Prime[900000001];

void Sieve()
{
	for(int i=2;i*i<=n;i++)
	{
		if(Prime[i]==false)
		{
			for(int j=i*i;j<=n;j=j+i)
			{
				Prime[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(Prime[i]==false)
		{
			Vec.push_back(i);
		}
	}
}

int main()
{
	Sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		//int ans=Vec[n-1];
		cout<<Vec[n-1]<<endl;
	}
	return 0;
}
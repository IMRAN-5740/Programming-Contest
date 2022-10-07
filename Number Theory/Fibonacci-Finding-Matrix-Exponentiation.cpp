#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define N 5
ll I[N][N];
ll T[N][N];
using namespace std;
void mul(ll A[][N],ll B[][N],ll p)
{
	ll Res[N+2][N+2];
	ll i,j,k;
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=p;j++)
		{
			Res[i][j]=0;
			for(k=1;k<=p;k++)
			{
				ll x=(A[i][k]*B[k][j])%mod;
				Res[i][j]=(Res[i][j]+x)%mod;
			}
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			A[i][j]=Res[i][j];
		}
	}
}
void Solve(ll n, ll m, ll p)
{
	//Indentity Matrix
	I[1][1]=I[2][2]=1;
	I[1][2]=I[2][1]=0;

	//Base Matrix
	T[1][1]=0;
	T[1][2]=T[2][1]=T[2][2]=1;
	p--;
	while(p)
	{
		if(p%2==1)
		{
			mul(I,T,2);
			p--;
		}
		else
		{
			mul(T,T,2);
			p=p/2;
		}
	}
	ll ans=n*I[1][2]+m*I[2][2];
	cout<<ans%mod<<endl;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,p;
		cin>>n>>m>>p;
		Solve(n,m,p);
	}
	return 0;
}
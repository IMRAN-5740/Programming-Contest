#include<bits/stdc++.h>
using namespace std;
const int N =1e2;
int arr[N];
int brr[N];
vector<int>vec;
int cnt;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		arr[1]=0;
		arr[2]=0;
		arr[3]=0;
		arr[4]=0;
		arr[5]=0;
		arr[6]=1;
		arr[7]=1;
		arr[8]=0;
		arr[9]=0;
		arr[10]=0;
		arr[11]=0;
		arr[12]=0;
		arr[13]=1;
		arr[14]=1;
		arr[15]=0;
		arr[16]=0;
		arr[17]=0;
		arr[18]=0;
		arr[19]=0;
		arr[20]=1;
		arr[21]=1;
		arr[22]=0;
		arr[23]=0;
		arr[24]=0;
		arr[25]=0;
		arr[26]=0;
		arr[27]=1;
		arr[28]=1;
		arr[29]=0;
		arr[30]=0;
		int n;
		cin>>n;
		int i=1;
		while(n--)
		{
			int x;
			cin>>x;
			if(arr[x]==0)
			{
				arr[x]++;
			}
		}
		for(int j=1;j<=30;j++)
		{
			if(arr[j]==1)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}
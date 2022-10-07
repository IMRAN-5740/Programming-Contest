#include<bits/stdc++.h>
#define tasim long long int  
using namespace std;


tasim cnt;
float sum;
int main()
{
	float n;
	while(cnt<2)
	{
		cin>>n;
		if(n>=0.0 and n<=10.0)
		{
			sum+=n;
			cnt++;
		}
		else
		{
			cout<<"nota invalidia"<<endl;
		}
	}
	cout<<"media :"<<(sum/2)<<endl;
	

	return 0;
}
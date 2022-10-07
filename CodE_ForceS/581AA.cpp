#include<bits/stdc++.h>
using namespace std;
int main()
{
	int red,blue;
	cin>>red>>blue;
	if(red>blue)
	{
		int temp=red-blue;

		int def=0,same=0;
		def =blue;
		same=temp/2;
		cout<<def<<" "<<same<<endl;
	}
	else if (red<blue)
	{
		int temp=blue-red;
		int def=0,same=0;
		def=red;
		same=temp/2;
		cout<<def<<" "<<same<<endl;
	}
	else
	{
		int def=0,same=0;
		def=red;
		cout<<def<<" "<<same<<endl;
	}
	
	return 0;
}
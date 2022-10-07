#include<bits/stdc++.h>
using  namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int P;
		cin>>P;
		int menuiteams=0;
		for(int i=11;i>=0;i--)
		{
			 int Current_Power=pow(2,i);
		
			while(P>=Current_Power)
			{
				P-=Current_Power;
				menuiteams++;
			}
		}
		cout<<menuiteams<<endl;
	}
	return 0;
}

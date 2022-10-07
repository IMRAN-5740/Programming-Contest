#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	float Hardness,Carbon_C,Tensile_S;
	cin>>Hardness>>Carbon_C>>Tensile_S;
		if(Hardness>50 && Carbon_C<0.7 && Tensile_S>5600)
		{
			cout<<"10"<<endl;
		}
		else if((Hardness>50 && Carbon_C<0.7) )
		{
			cout<<"9"<<endl;
		}
		else if( (Carbon_C<0.7 && Tensile_S>5600))
		{
			cout<<"8"<<endl;
		}
		else if((Hardness>50 && Tensile_S>5600) )
		{
			cout<<"7"<<endl;
		}
		else if(Hardness>50 || Carbon_C<0.7 || Tensile_S>5600)
		{
			cout<<"6"<<endl;
		}
		else
		{
			cout<<"5"<<endl;
		}
	}
	return  0;
}
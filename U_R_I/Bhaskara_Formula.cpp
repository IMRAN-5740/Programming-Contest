#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double d=(b*b)-(4*a*c);
	double r1,r2;
	if (d<0 || a==0){
		cout<<"Impossivel calcular\n";
	}
else 
{
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("R1 = %0.5f\n",r1);
	printf("R2 = %0.5f\n",r2);
}
return 0;
}
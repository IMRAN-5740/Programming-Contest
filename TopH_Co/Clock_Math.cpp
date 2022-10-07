#include<bits/stdc++.h>
using namespace std;
int main() {
	double h,m;
	double k,res;
		cin>>h>>m;
		k=(0.5*(60.0*h-11.0*m));
		if (k>180){
		res=360-k;
		printf("%0.7f\n",res);
		}
		else 
		printf("%0.7f\n",k);
    return 0;
}

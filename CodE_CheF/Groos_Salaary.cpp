#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double salary,t_res=0;
		cin>>salary;
		if(salary>1500){
			t_res=salary+500+(salary*98/100);
			//cout<<t_res<<endl;
			printf("%0.2lf\n", t_res);
		}else{
			t_res = salary + (salary*10/100) + (salary*90/100);
			//cout<<t_res<<endl;
		printf("%0.2lf\n", t_res);
		}
	}
	return  0;
}
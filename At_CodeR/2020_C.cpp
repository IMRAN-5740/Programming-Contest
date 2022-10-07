// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	long double a, b, c;
// 	cin >> a >> b >> c;
// 	long double eps = 1.0E-14;
// 	//cout << eps << endl;
// 	if(sqrt(a) + sqrt(b) + eps < sqrt(c))
// 	{
// 		cout << "Yes" << endl;
// 	}
// 	else
// 	{
// 		cout << "No" << endl;
// 	}

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i+=3){
		if(i==10){
			continue;
		}
		if(i>13){
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}

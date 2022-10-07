// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int cnt=0;
// 	int array[n+1];
// 	for(int i=1;i<=n;i++){
// 		cin>>array[i];
// 		if(array[i]%2==0){
// 			cnt++;
// 		}
// 	}
// 	printf("%d valores pares",cnt);
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
	// int a,b,c,d,e;
	// cin>>a>>b>>c>>d>>e;
	// if()
	int array[6];
	int i,cnt=0;
	for(int i=1;i<=5;i++){
		cin>>array[i];
		if(array[i]%2==0){
			cnt++;
		}
	}
	 	printf("%d valores pares\n",cnt);

	return 0;
}
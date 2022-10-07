// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int test;
// 	cin >> test;
// 	int n, i, j, ans, x, y;
// 	while (test--) {
// 		x = 0;
// 		y = 0;
// 		cin >> n;
// 		char p[n + 2];
// 		scanf("%s", p);
// 		for(i = 0; i < n; i++) {
// 			if((p[i] - 48) % 2 == 1) {
// 				x++;
// 			}

// 		}
// 		if (x > 1) {
// 			for (i = 0; i < n; i++) {
// 				if ((p[i] - 48) % 2 == 1) {
// 					printf("%d", p[i] - 48);
// 					++y;
// 				}
// 				if(y==2)
// 					break;
// 			}
// 			cout<<endl;
// 		}
// 		else
// 			cout<<"-1"<<endl;
// 	}
// 	return 0 ;
// }










#include<stdio.h>
int main(){
	int c,d;
	printf("Enter the number of c & d :");
	scanf("%d%d",&c,&d);
	int temp=0;
	if(true){
		temp=c;
		c=d;
		d=temp;	
	}
	printf("C :%d D :%d \n",c,d);
	return 0;
}
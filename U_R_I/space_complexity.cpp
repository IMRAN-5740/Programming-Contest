#include<stdio.h>
#include<math.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int cnt=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			for (int k=1;k<=n;k++){
				cnt=cnt+1;
			}
		}
	}
	printf("%d = %d\n",n,cnt);
}
	return 0;
}
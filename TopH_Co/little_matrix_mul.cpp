#include <stdio.h>
#include <math.h>
int main() {

	int a11,a12,a21,a22,b11,b12,b21,b22,ab11,ab12,ab21,ab22;
	scanf("%d %d", &a11, &a12);
	scanf("%d %d", &a21, &a22);
	scanf("%d %d", &b11, &b12);
	scanf("%d %d", &b21, &b22);
	ab11 = ((a11*b11)+(a12*b21));
	ab12 = ((a11*b12)+(a12*b22));
	ab21 = ((a21*b11)+(a22*b21));
	ab22 = ((a21*b12)+(a22*b22));
	printf("%d %d\n%d %d\n", ab11,ab12,ab21,ab22);
	return 0;
}

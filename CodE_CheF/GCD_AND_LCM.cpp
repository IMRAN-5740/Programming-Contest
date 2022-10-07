#include<stdio.h>
int main()
{
    long long T,i,A,B,X,Y,K,GCD,LCM;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld%lld",&A,&B);
        X=A;
        Y=B;
        while(Y!=0)
        {
            K=X%Y;
            X=Y;
            Y=K;
        }
        GCD=X;
        LCM=(A*B)/GCD;
        printf("%lld %lld",GCD,LCM);
        printf("\n");
    }
    return 0;
}

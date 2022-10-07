#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1; i<n; i++)
    {
        if(i%2)
        {
            printf("I hate ");
            printf("that ");
        }
        else
        {

            printf("that ");

        }
        if(i<n)
        {
            printf("I love ");
            printf("it ");

        }


    }
    return 0;
}

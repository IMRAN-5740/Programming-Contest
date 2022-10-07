#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    char s[100];
    int len=strlen(s);
    for(i=0;  i<n; i++)
    {
        gets(s);
        sum=s[0]+s[4];
        printf("sum :%d",sum);
    }
    return 0;
}

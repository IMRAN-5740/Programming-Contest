#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000000];
    char s2[1000000];
    int i,j,k,sum=0;
    gets(s1);
    int p=strlen(s1);
    gets(s2);
    int q=strlen(s2);
    for(i=0,j=0;i<'\0',j<'\0';i++,j++)
    {
        sum=s1[p-i-1]+s2[q-j-1];
    }
    printf("%d",sum);
    return 0;
}

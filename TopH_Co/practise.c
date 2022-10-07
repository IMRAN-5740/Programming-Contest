#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],str3[200];
    gets(str1);
    int len1=strlen(str1);
    gets(str2);
    int len2=strlen(str2);
    int i,j;
    for(i=0,j=0; i<len1; i++,j++)
    {
        str3[j]=str1[i];
    }
    for (int i=0; i<len2; i++)
    {
        str3[j]=str2[i];
        j++;
    }
    str3[j]!='\0';
    printf("%s\n",str3);
    return 0;
}

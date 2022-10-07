#include<stdio.h>
#include<string.h>
#include<math.h>
//#include<bits/stdc++.h>
int main()

{

    char s1[100];
    char s2[100];
    //gets(s1);//multiple word
    scanf("%s",s1);//use of single word
    int i=0,len=0,j;
    while (s1[i]!='\0')
    {
        i++;
        len++;
    }
    for (j=0,i=len-1; i>=0; j++,i--)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
   // printf("String 1 :%s\n",s1);
   // printf("String 2 :%s\n",s2);
    int k=strcmp(s1,s2);

    if(k==0)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}

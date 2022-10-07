#include<stdio.h>
#include<string.h>
int main()
{
   char s[101];
   int i,l=0,u=0;
   scanf("%s",s);
   for(i=0;s[i]!='\0';i++){
      if(s[i]<97){
         u++;
      }
      else{
         l++;
      }
   }
   if(u==strlen(s) || (s[0]>96 && u==strlen(s)-1)){
      s[strlen(s)+1]=strlwr(s);
    if(l!=0)
        s[0]-=32;
      }
 
   printf("%s\n",s);
   return 0;
}
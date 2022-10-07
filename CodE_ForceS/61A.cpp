#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	char  s[105];
	gets(s);
    char s1[105];
    gets(s1);
    int len1=strlen(s1);
    char s2[105];
    //if(len==len1){
    for(int i=0; i<len1; i++)
    {
        //s2[i]=s[i]+s1[i];
        if(s[i]==s1[i])
        {
            s2[i]=0;
        }
        else
        {
            s2[i]=1;
        }
     printf("%d",s2[i]);
        // cout<<s2[i];
    }
    
    return 0;
}

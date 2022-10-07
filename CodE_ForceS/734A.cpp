#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l1=0,l2=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
            l1++;
        if(s[i]=='D')
            l2++;
    }
    if(l1>l2)
        printf("Anton\n");
    else if(l1<l2)
        printf("Danik\n");
    else if(l1==l2)
        printf("Friendship\n");
    return 0;
}

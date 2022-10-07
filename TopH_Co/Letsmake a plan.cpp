#include<iostream>

#include<Stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=0;
    char s1[100],s2[100],s3[100],s4[100];
    for(int i=1; i<=t; i++)
    {
        cin>>s1>>s2>>s3>>s4;
        if ((strcmp(s1,s3)==0)||(strcmp(s1,s4)==0)||(strcmp(s2,s4)==0)||(strcmp(s2,s3)==0))
        {
            printf("Possible\n");
        }
        else
            printf("Oh no!, such a shame\n");
    }
    return 0;
}

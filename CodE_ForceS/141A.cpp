#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int v[100]={0},x[100]={0},i,f=0;
    for(i=0;s1[i];i++)
        v[s1[i]]++;
    for(i=0;s2[i];i++)
        v[s2[i]]++;

    for(i=0;s3[i];i++)
        x[s3[i]]++;
    for(i=0;i<100;i++)
    {
        if(v[i]!=x[i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
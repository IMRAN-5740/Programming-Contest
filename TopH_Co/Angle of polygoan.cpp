#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long t,n;
    double res;
    cin>>t;
    for (int  i=1;i<=t;i++)
    {
        cin>>n;
        res=(((n-2)*180)/n);
        printf("%0.10lf\n",res);
    }
    return 0;
}

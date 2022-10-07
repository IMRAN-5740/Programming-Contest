#include<iostream>
#include<stdio.h>
using namespace std;
int mulTiplication_Table(int n)
{
    int i,result;
    cout<<"The Result of Multiplication Table:"<<endl;
    for (i=1; i<=10; i++)
    {
        result = n*i;
        cout<<n<<"*"<<i<<" "<<"="<<result<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the number of n:"<<endl;
    cin>>n;
    int k=mulTiplication_Table(n);
}

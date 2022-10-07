//Mohammad Imran
//University of BSMRSTU
//Dept of CSE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int array[n+1];
    for (i=1; i<=n; i++)
    {
        scanf("%d",&array[i]);
        if (array[i]==1)
        {
            cnt++;
            break;
        }
    }
    if (cnt==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
}

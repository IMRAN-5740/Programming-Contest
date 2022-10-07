#include<bits/stdc++.h>
using namespace std;

int in()
    {
    int n ;
    scanf("%d", &n);
    return n;
    }

int main()
{
    int n = in(), cpu_l = in(), mem_l = in();
    for(int i = 1; i <= n; i++) 
    {
        int df = in(), cle = in(), mle = in();
        if(cle > cpu_l) return !printf("CLE\n");
        else if(mle > mem_l) return !printf("MLE\n");
        if(df !=0) return !printf("WA\n");
    }
    printf("AC\n");
    return 0;
}
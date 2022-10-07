#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define MAX 10000000
long  long PrimeNum[MAX + 1];
void prime_generator()
{
    for(int k = 4; k <= MAX; k += 2)
    {
        PrimeNum[k] = 1;
    }
    for(int i = 3; i <= sqrt (MAX); i += 2)
    {
        if(PrimeNum[i] == 0)
        {
            for(int k = (i + i); k <= MAX; k += i)
            {
                PrimeNum[k]  = 1;
            }
        }
    }
}
int main()
{
    int x;
    prime_generator();

    while(cin >> x)
    {
        if(x == 1)
        {
            cout << "Unit number.\n";
            continue;
        }
        if(x == 0)
        {
            cout << "Zero.\n";
            continue;
        }
        if(PrimeNum[x] == 0)
            cout << "Prime number.\n";
        else
            cout << "Composite number.\n";
        //cout<<pi<<endl;
    }
    return 0;
}

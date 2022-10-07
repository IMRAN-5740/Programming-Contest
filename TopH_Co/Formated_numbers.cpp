#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    long long  kount = 0;

    getline(cin, str);

    long long  size = str.size();

    int sp_case = size%3;
    sp_case -= 1;

    for(long long  i = 0; i < size; i++)
    {
        printf("%c", str[i]);
        if(sp_case == i)
            printf(",");
        if(i > sp_case)
        {
            kount += 1;
            if(kount == 3 && i != (size-1))
            {
                printf(",");
                kount = 0;
            }
        }
    }
    printf("\n");
    return 0;
}

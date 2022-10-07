#include<bits/stdc++.h>
using namespace std;

int sc1()
{
    int x;
    scanf("%d", &x);
    return x;
}

long long sc2()
{
    long long x;
    scanf("%lld", &x);
    return x;
}

#define  gcd(a,b)         __gcd(a,b)
#define  lcm(a,b)         (a*b)/gcd(a,b)
#define  Int              sc1()
#define  LL               sc2()
#define  For(n)           for(int i=0;i<n;i++)
#define  Forj(n)          for(int j=0;j<n;j++)
#define  Fork(n)          for(int k=0;k<n;k++)
#define  For1(n)          for(int i=1;i<=n;i++)
#define  ll               long long
#define  vi               std::vector<int>
#define  vll              std::vector<ll>
#define  qui              qu
#define  pb               push_back
#define  mpsi             std::map<string, int>
struct AB
{
    int r, m;
    string name;
} node[106];

bool cmp(AB a, AB b)
{
    if (a.m != b.m)
        return a.m > b.m;
    else
        return a.r < b.r;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tes = Int;

    for (int i = 0; i < tes; i++)
    {
        int r, m;
        string name;
        cin >> node[i].r >> node[i].name >> node[i].m;
    }
    sort(node, node + tes, cmp);

    puts("Roll | Name       | Marks");
    puts("-------------------------");
    for(int i=0; i<tes; i++)
    {
        printf("%4d | ",node[i].r);
        cout<<node[i].name;

        for(int j=0; j<(10-((int)(node[i].name.size()))); j++)
        {
            cout<<" ";
        }
        printf(" | %d\n",node[i].m);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if (A<=100&&B<=100&&C<=100)
    {
        if (A==B&&B==C&&A==C)
        {
            cout<<"Equilateral Triangle"<<endl;
        }
        else if (A==B||A==C||B==C)
        {
            cout<<"Isosceles Triangle"<<endl;
        }
        else if (A!=B||B!=C||A!=C)
        {
            cout<<"Bad Triangle"<<endl;
        }
    }
    return 0;
}

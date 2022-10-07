#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int T;
    scanf("%d%c",&T,&c);
    for(int t = 1; t <= T; t++)
    {
        vector<char>input;
        string str;
        getline(cin,str);
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 97 && str[i] <= 122)
                input.push_back(str[i]-32);
            else
                input.push_back(str[i]);
        }
        printf("Case %d: ",t);
        for(int i = 0; i < input.size(); i++)
        {
            printf("%c",input[i]);
        }
        printf("\n");
    }
    return 0;
}

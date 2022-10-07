// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string S)
// {
	
// 	string P = S;

// 	reverse(P.begin(), P.end());

// 	if (S == P)
// 	{
	
// 		return true;
// 	}
// 	else 
// 	{

// 		return false;
// 	}
// }
// int main()
// {
	
// 	string S ;
// 	cin>>S;
// 	//int len=S.size();
// 	int res=isPalindrome(S);
// 	if(res==0)
// 	{
// 		string B="a";
// 		string A=B+S;
// 		int c1=isPalindrome(A);
// 		if(c1==1)
// 		{
// 			cout<<"Yes"<<endl;
// 		}
// 		else
// 		{
// 			string C="aa";
// 			string X=C+S;
// 			int c2=isPalindrome(X);
// 			if(c2==1)
// 			{
// 				cout<<"Yes"<<endl;
// 			}
// 			if(c2==0)
// 			{
// 					string M="aaa";
// 					string Y=M+S;
// 				int c3=isPalindrome(Y);
// 				if(c3==1)
// 				{
// 					cout<<"Yes"<<endl;
// 				}
// 				if(c3==0)
// 				{
// 					string N="aaaa";
// 						string W=N+S;
// 					int c4=isPalindrome(W);
// 					if(c4==1)
// 					{
// 						cout<<"Yes"<<endl;
// 					}
// 					if(c4==0)
// 					{
// 						string O="aaaaa";
// 						string V=O+S;
// 						int c5=isPalindrome(V);
// 						if(c5==1)
// 						{
// 							cout<<"Yes"<<endl;
// 						}
// 						if(c5==0)
// 						{
// 							string D="aaaaaa";
// 							string G=D+S;
// 							int c6=isPalindrome(G);
// 							if(c6==1)
// 							{
// 								cout<<"Yes"<<endl;
// 							}
// 							else
// 							{
// 								cout<<"No"<<endl;
// 							}
// 						}else
// 			{
// 				cout<<"No"<<endl;
// 			}
// 					}else
// 			{
// 				cout<<"No"<<endl;
// 			}
// 				}else
// 			{
// 				cout<<"No"<<endl;
// 			}
		
// 			}
// 			else
// 			{
// 				cout<<"No"<<endl;
// 			}
		
// 		}
		
		
// 	}
// 	else
// 	{
// 		cout<<"Yes"<<endl;
// 	}
	
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    s2=s;
    int d=s.size();
    int f=-1,g=-1,x=0,y=0;
    for(int i=0;i<d;i++)
    {
        if(s[i]!='a')
        {
            f=i;
            break;
        }
        y++;
    }
    for(int i=d-1;i>=0;i--)
    {
        if(s[i]!='a')
        {
            g=i;
            break;
        }
        x++;
    }
    if(f!=-1 and g!=-1)
    while(f<g)
    {
        swap(s[f],s[g]);
        f++;
        g--;
    }

    if(s2==s and y<=x)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

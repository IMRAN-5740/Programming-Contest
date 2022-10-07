// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		string strValue=s;
// 		string s1=s;
// 		int cnt=0;
// 		int len=s.size();
// 		// for(int j=0;j<n;j++)
// 		// {

// 				for(int i=0;i<len-1;i++)
// 					{
// 							if(s[i]=='(')
// 							{
// 								if(s[i+1]==')')
// 								{
// 									cnt++;
// 									strValue = s;
// 				    				int indexPos = i;
// 				    				strValue.erase(indexPos,2);
// 				    				//strValue.erase(indexPos+1, 1);
// 				    				len=len-2;
// 								}	
// 							}	
// 							s=strValue;
					
// 				cout<<strValue << endl;
// 				cout<<cnt<<endl;

// 					}
						
// 		//}
// 	}
// 	return 0;
// }



// int temp=cnt*2;
// int len=s.size();
// int res=(len-temp)/2;//number of moves
// cout<<res<<endl;

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int cnt=0;
		int res=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
			{
				cnt++;
			}
			else
			{
				cnt--;
			}
			if(cnt<0)
			{
				res++;
				cnt=0;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
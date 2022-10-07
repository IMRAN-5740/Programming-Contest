#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len =s.size();
	int cnt=0,cnt1=0;
	// int s1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	// int s2[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i=0;i<len;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{//capital count
           cnt++;
		}
        else if(s[i]>=97&&s[i]<=122)
        {//small count
            cnt1++;
        }
    }

	// for(int i=0;i<len;i++)
	// {
	// 	for(int j=0;j<26;j++)
	// 	{
	// 		if(s[i]==s1[j])
	// 		{//capital count
	// 			cnt++;
	// 		}
	// 		else if(s[i]==s2[j]){
	// 			//small count
	// 			cnt1++;
	// 		}
	// 	}
	// }
	if(cnt<=cnt1)
	{

		for(int i=0;i<len;i++)
		{
			if(s[i]<='Z')
			{
				s[i]=s[i]+32;
				//i++;
			}
		}
		cout<<s<<endl;
	}
	else
	{

		for(int i=0;i<len;i++)
		{
			if(s[i]>'Z')
			{
				s[i]=s[i]-32;
				//i++;
			}
		}
		cout<<s<<endl;
	}
	// cout<<cnt<<" "<<cnt1<<endl;
	// cout<<len<<endl;
	return 0;
}
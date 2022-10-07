#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt=0;
ll ans=0;
 void Palindrome(string p)
 {
 	
		ll len=p.size();
		for(ll i=0;i<len/2;i++)
		{
			if(p[i]!=p[(len-1)-i])
			{
				cnt=1;
				break;
			}
		}
 }
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		string temp=s;
		for(int i=0;i<temp.size();i++)
		{
			int indexPos = i;
			temp.erase(indexPos,1);
 			//strValue.erase(indexPos+1, 1);
 			Palindrome(temp);
 			char m=temp[i];
    		s[i]=m;
		
		
		if(cnt==1)
		{
			cout<<"String is not Palindrome"<<endl;
		}
		else
		{
			ans++;
			cout<<"String is Palindrome"<<endl;
		
		}
		cnt=0;
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int size=s.size();

		string AB="ab";
		string BA="ba";

		int len=AB.size();
		int len1=BA.size();

		int AB_cnt=0;
		int BA_cnt=0;

		// cout<<len<<endl;
		// cout<<len1<<endl;
		for(int j=0;j<size;j++)
        {
            if(s.compare(j,len,AB)==0)
            {
                AB_cnt++;
            }
        }
      //  cout<<AB_cnt<<endl;

        for(int k=0;k<size;k++)
        {
            if(s.compare(k,len1,BA)==0)
            {
                BA_cnt++;
            }
        }
     //   cout<<BA_cnt<<endl;
        // if(AB_cnt==BA_cnt)
        // {
        // 	cout<<s<<endl;
        // }
        if (AB_cnt==BA_cnt)
        {
        	cout<<s<<endl;
        }
        else if(AB_cnt>BA_cnt){
        	int pos=size-len;
        	s[pos+1]='a';
        	cout<<s<<endl;
        }
        else if(AB_cnt<BA_cnt)
        {
        	int pos=size-len1;
        	s[pos+1]='b';
        	cout<<s<<endl;
        }
        	
	}
	return 0;
}
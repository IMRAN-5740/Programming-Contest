#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len =s.size();

	//cout<<len<<endl;
	for(int i=0;i<len;i++){
		if(s[i]>'Z'){
			s[i]=s[i]-32;
		}
	}
	//cout<<s<<endl;
	// string s1;
	// s1={"WUB"};
	int m;
	for(int i=0;i<len;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            if(m==1)
            {
                cout<<" ";
            }
            m++;
        }
        else{
 
            cout<<s[i];
            m=1;
        }
 
    }
    cout<<endl;
	return 0;
}
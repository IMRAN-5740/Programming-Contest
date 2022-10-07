// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	int cnt=0;
// 	int mnt=0;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		string s;
// 		for(int i=0;i<n;i++)
// 		{
// 			char c;
// 			cin>>c;
// 			s.push_back(c);
// 		}
// 		cout<<s.size()<<endl;
// 		for(int i=0;i<s.size();i++)
// 		{
// 			if(s.substr(i, 4)=="code")
// 			{
// 				if(s.substr(i, 4)=="chef")
// 				{
// 					cnt=1;
// 					break;
// 				}
// 			}
// 			 if(s.substr(i, 4)=="chef")
// 			{
// 				if(s.substr(i, 4)=="code")
// 				{
// 					mnt=1;
// 					break;
// 				}
// 			}
// 		}
		
// 		cout<<cnt<<" "<<mnt<<endl;
	
// 	}
// 	return 0;
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin>>n;
 
	string s;
	cin>>s;
	bool f = false;
	for(int i=0;i<=n-4;i++)
	{
		if(s.substr(i,4) == "code")
		{
			f = true;
		}
		if(s.substr(i,4) == "chef")
		{
			if(f == false)
			{
				cout<<"WA"<<endl;
				return 0;
			}
			f = true;
		}
	}
	cout<<"AC"<<endl;
 
}
 
int main(){
	cin.tie(0);ios::sync_with_stdio(false);
 
	int t;
	cin>>t;
 
	while(t--){
		solve();
	}
 
 
	return 0;
}


// }
		#include<bits/stdc++.h>
		using namespace std;

		int main() {
		    int t;
		    cin>>t;
		    while(t--){
		        
		        string s;
		        cin>>s;
		        int arr[26] ={0};
		        int a[26]={0};
		        int n =s.length();

				//first part
		        for(int j=0;j<n/2;j++)
		        {
		            int in=s[j] -'a' ;
		            arr[in]++;
		        }
		        
		        
		        //secont part
		        for(int j = (n+1)/2;j<n;j++)
		        {
		            int index = s[j]-'a';
		            a[index]++;
		        }
		        int f=0;

		        for(int i=0;i<26;i++)
		        {
		            if(a[i]!=arr[i])
		            {
		                f=1;
		            }
		        }
			        if(f==1)
			        {
			            cout<<"NO"<<endl;
			        }
			        else
			        {
			            cout<<"YES"<<endl;
			        }
		        
		    }
			// your code goes here
			return 0;
		}

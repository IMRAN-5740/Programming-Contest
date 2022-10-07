#include<bits/stdc++.h>
using namespace std ;
int p,t,f,k;
string s;
int main() 
{
    cin>>s;
    f=s.size();
    for(int i=1;i<f;++i)
    {
    	if(s[i]=='1')
    	{
    		p=i;
    		t=k;
    	}
    	else 
    	{
    		k++;
    	}
    }	
 //   if(p>0)
    {
    	 t=t+(p>0)*2-1;
    }
   

    cout<<t+f<<endl;
    return 0;
}



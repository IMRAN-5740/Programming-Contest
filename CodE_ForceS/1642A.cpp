#include<bits/stdc++.h>
using namespace std;
int main()
{
			int t;
            cin>>t;
            while(t--)
            {
                int x1,x2,x3,y1,y2,y3;
                cin>>x1>>y1;
                cin>>x2>>y2;
                cin>>x3>>y3;
                if(y1==y2 and y1!=0 and y1>y3) 
                	{
                		cout<<(abs(x1-x2))<<endl;
                	}
                else if(y1==y3 and y1!=0 and y1>y2) 
                	{
                		cout<<(abs(x1-x3))<<endl;
                	}
                else if(y2==y3 and y2!=0 and y2>y1) 
	                {
	                	cout<<(abs(x2-x3))<<endl;
	                }
                else 
	                {
	                	cout<<0<<endl;
	                }
            }
	return 0;
}
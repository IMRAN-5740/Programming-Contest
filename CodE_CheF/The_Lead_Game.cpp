#include <iostream>
using namespace std;

int main() 
{
    int R,p,q,f=0,h=0,j=0,k=0,x1=0,x2=0;
    cin>>R;
                     for(int i=1;i<=R;i++)
                        {
                            cin>>p>>q;
                            f+=p;
                            h+=q;
                            if(f>=h)
                            {
                               j=f-h; 
                            }
                            else
                            {
                                k=h-f;
                            }
                            if(j>x1)
                            {
                                x1=j;
                            }
                            if(k>x2)
                            {
                                x2=k;
                            }
                        }
            if(x1>x2)
            {
                cout<<"1 "<<x1<<endl;
            }
            if(x2>x1)
            {
                cout<<"2 "<<x2<<endl;
            }
	return 0;
}

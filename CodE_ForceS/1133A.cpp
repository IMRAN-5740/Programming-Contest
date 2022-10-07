#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin>>s1>>s2;
	int h1, m1, h2, m2, h, m;
	h1 = (int)(s1[0]-'0')*10+(int)(s1[1]-'0');
	m1 = (int)(s1[3]-'0')*10+(int)(s1[4]-'0');

	h2 = (int)(s2[0]-'0')*10+(int)(s2[1]-'0');
	m2 = (int)(s2[3]-'0')*10+(int)(s2[4]-'0');
	//cout<<h1<<" "<<m1<<" "<<h2<<" "<<m2<<endl;

	int totalMin = 0;
    for( h=h1,m=m1; (h!=h2 || m!=m2); totalMin++)
    {
        m++;
        if( m >= 60 )
        {
            h++;
            m = 0;
        }
    }

    totalMin /= 2;

    for( h=h1,m=m1; totalMin; totalMin-- )
    {
        m++;
        if( m >= 60 )
        {
            h++;
            m = 0;
        }
    }

    if( h < 10 ) printf("0");
    printf("%d",h);
    printf(":");
    if( m < 10 ) printf("0");
    printf("%d\n",m);

	return 0;
}


#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d:%d",&a,&b);
scanf("%d:%d",&c,&d);
int t=(a+c)*60+b+d;
t=t/2;
printf("%02d:%02d",t/60,t%60);
}
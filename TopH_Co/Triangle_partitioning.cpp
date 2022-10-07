#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int t;
	cin>>t;
	double l=0.0,ab,mid,bc,s,r,ac,ad,de,ae,ratio,abc,s1,ade,bdec;
	for (int i=1;i<=t;i++)
	{
		cin>>ab>>bc>>ac>>ratio;
		l=0.0;
		//r=ab;
		int cnt = 100;
		while (cnt--){
		mid=(l+ab)/2.0;
		
		ad=mid;
		ae=(ad*ac)/ab;
		de=(ad*bc)/ab;
		s=(ab+bc+ac)/2.0;
		abc=sqrt(s*(s-ab)*(s-bc)*(s-ac));
		s1=(ad+de+ae)/2.0;
		ade=sqrt(s1*(s1-ad)*(s1-de)*(s1-ae));
		bdec=abc-ade;
		if ((ade/bdec)<ratio){
			l=mid;
		}
		else {
			r=mid;
		}
	}
	printf("Case %d: %0.10f\n",i,mid);
	}
  return 0;
}
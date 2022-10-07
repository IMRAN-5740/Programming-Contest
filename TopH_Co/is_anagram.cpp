#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int  main(){
	string s1, s2;
	cin >>s1>>s2;
	sort(all(s1));
	sort(all(s2));
	if(s1 == s2) printf("Yes\n");
	else printf("No\n");
	return 0;
}

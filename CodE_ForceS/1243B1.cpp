#include <bits/stdc++.h>
#define pb push_back
#define maxx 10000005
#define MOD 1000003
#define sf(n) scanf("%lld", &n);
#define mem(a) memset(a, 0, sizeof(a))
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define pi acos(-1.0)
using namespace std;
#define ll long long
#define ull unsigned long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin >>s1>>s2;
        vector<char>v1,v2;
        for(int i=0;i<n;i++){

            if(s1[i]!=s2[i]){
                v1.pb(s1[i]);
                v2.pb(s2[i]);
            }
        }
        if(v1.size()!=2)
            cout <<"No"<<endl;
        else{
            if(v1[0]==v1[1] && v2[0]==v2[1])
                cout <<"Yes"<<endl;
            else
                cout <<"No"<<endl;
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n+1];
// 	for(int i=1;i<=n;i++){
// 		cin>>arr[i];
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

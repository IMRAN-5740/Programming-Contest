// // #include<bits/stdc++.h>
// // #define ll long long
// // using namespace std;
// // int main(){
// // 	ll t;
// // 	cin>>t;
// // 	while(t--){
// // 		ll n;
// // 		cin>>n;
// // 		char  s[10000];
// // 		char p[]="JGEC";
// // 		for(ll i=0;i<n;i++){
// // 			cin>>s[i];
// // 		}
// // 		for(ll j=0;j<n;j++){
// // 		if(n==4){
// // 			if(p[j]==s[j]){
// // 				cout<<"1"<<endl;
// // 			}
// // 			else if (p[j]==s[j])
// // 			else
// // 				cout<<"0"<<endl;
// // 		}
// // 	}
// // }
// // 	return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;
// int  main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
//     char str1[100000];
//     for(int k=0;k<n;k++){
//    	cin>>str1[k];
// }

//     char str2[]="JGEC";

//     int x=0,y=0,i,j,cnt;


//     while (str1[x]!='\0')
//     {
//              x++;
//     }

//     while (str2[y]!='\0')
//     {
//            y++;
//     }

//     for(i=0; i<=x-y; i++)
//     {
//         for(j=i; j<i+y; j++)
//         {
//            cnt=1;
//             if (str1[j]!=str2[j-i])
//             {
//                cnt=0;
//                break;
//             }
//         }
//     	cnt++;
// 	}
// 	if(cnt>=1)
// 		cout<<cnt++<<endl;
// 	else
// 		cout<<"0"<<endl;
// }
//         return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int arr[n+1];
 	for(int i=1;i<=n;i++){
 		cin>>arr[i];
 	}
 	sort(arr+1,arr+n+1);
 	for(int j=1;j<=n;j++){
 		cout<<arr[j]<<" "<<endl;
 	}
 	return 0;
 }
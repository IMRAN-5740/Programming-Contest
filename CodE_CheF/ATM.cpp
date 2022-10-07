#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;   
    float b;
    cin>>a>>b;
    if(b>=a+0.5 && a%5==0){
        float c;
        c=b-a-0.50;
        cout<<fixed<<setprecision(2)<<c<<endl;
    }
    else {
            float c;
            c=b;
            cout<<fixed<<setprecision(2)<<c<<endl;
        }
        return 0;
}






// #include <bits/stdc++.h>
// #define int               long long
// #define pb                push_back
// #define ppb               pop_back
// #define pf                push_front
// #define ppf               pop_front
// #define fr                first
// #define sc                second
// #define ld                long double
// #define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// const long long INF=1e18;
// const long long mod=1e9+7;



// signed main(){
//     IOS;
//     int a;   
//     float b;
//     cin>>a>>b;
//     if(b>=a+0.5 && a%5==0){
//         float c;
//         c=b-a-0.50;
//         cout<<fixed<<setprecision(2)<<c<<"\n";
//     }
//     else {
//             float c;
//             c=b;
//             cout<<fixed<<setprecision(2)<<c<<"\n";
//         }
    

//     return 0;
// }

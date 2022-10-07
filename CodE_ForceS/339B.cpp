#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,m,x,v,val;

cin >> n >> m;
m=m-1;
cin >> v;
val=v;
while(m--){
 cin >> x;

 if(v < x )
 {
     val+=x-v;
     v=x;
 }
 else if( v > x ){

    val+=((n-v)+x);
    v=x;
 }
  else{
        continue;
  }

}
cout << val-1 << endl;
}

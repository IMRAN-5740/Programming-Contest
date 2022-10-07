/******************             ***********************/
     /****************BSMRSTU*****************/
/***********BISMILLAHIR RAHMANIR RAHIM*************/
/*.................Mohammad Imran................*/
/*..................Dept Of CSE.................*/

#include<bits/stdc++.h>
#define llu unsigned long long
int gcd(llu a,llu b);
int main(){
    llu G;
    llu a,b,N;
    while(scanf("%llu",&N)==1){
        if(N==0) break;
        G=0;
        for(llu i=1;i<N;i++)
            for(llu j=i+1;j<=N;j++){
                G+=gcd(i,j);
            }
        printf("%llu\n",G);
    }
    return 0;
}
int gcd(llu a,llu b){
    while(b>0){
        a=a%b;
        a^=b;
        b^=a;
        a^=b;
    }
    return a;
}
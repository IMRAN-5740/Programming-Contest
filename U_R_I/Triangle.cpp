#include<bits/stdc++.h>

using namespace std;
int main(){
    float A, B,C,area;
    scanf("%f %f %f", &A, &B, &C);
    if ((A < (float)(B+C)) && (B < (float)(A+C)) && (C < (float)(B+A))){
       area= A + B + C;
        printf("Perimetro = %.1f\n",area);
    }
    else{
        area= ((A + B) * C) / 2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
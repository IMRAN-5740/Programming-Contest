#include<bits/stdc++.h>
using namespace std;
int main() { 
    double mealCost;
    int tipPercent;
    int taxPercent;
    int totalCost = 0;
    
    // scanf("%lf", &mealCost);
    // scanf ("%d", &tipPercent);
    // scanf ("%d", &taxPercent);
    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;
    totalCost = (int) (mealCost +  (mealCost*tipPercent/100) + (mealCost*taxPercent/100) + 0.5);

   // printf ("The total meal cost is %d dollars.", totalCost);
    cout<<totalCost<<endl;
    return 0;
}
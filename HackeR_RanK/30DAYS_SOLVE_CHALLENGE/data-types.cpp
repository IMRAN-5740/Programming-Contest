#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2="";
    // Read and save an integer, double, and String to your variables.
    cin>>i2;
    cin>>d2;
    while (cin>>s2){
        s+=s2+" ";
    }
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<endl;
    // Print the sum of the double variables on a new line.
    d2+=d;
    printf("%.1f\n",d2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above sh
    cout<<s;
    return 0;
}
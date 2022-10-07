// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,round=0,t;
//     //cout<<"Enter the number of n: ";
//     //scanf("%d",&t);
//     //while(t--){}
//     scanf("%d",&n);
//     int array[n+1];
//     //cout<<"Enter the number of array without sorting : ";
//     for (int i=1; i<=n; i++)
//     {
//         cin>>array[i];
//     }
//     int k=n;
//     for (int j=1; j<=n; j++)
//     {
//         for (int i=1; i<=k-j; i++)
//         {
//             ///Swapping Algorithm
//             if(array[i]>array[i+1])
//             {
//                 round=array[i];
//                 array[i]=array[i+1];
//                 array[i+1]=round;
//             }
//             ///Ends swapping Algorithm
//         }
//     }
//    // cout<<"The value of sorting array: ";
//     for (int i=1; i<=n; i++)
//     {
//      cout<<array[i]<<" ";
//     }
//     //puts("\n");
//     return 0;
// } 
//Time limit upper
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    
    for(int i=1;i<=n;i++){
       cin>>a[i]; 
    }
    
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

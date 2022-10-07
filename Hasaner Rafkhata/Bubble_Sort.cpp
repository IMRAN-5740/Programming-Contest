#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n+1];
    for(int i=0;i<n;i++){
        //array[i]=rand()%100;
        cin>>array[i];
    }
    bool isSwapped;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        isSwapped =false;
        for(int j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;            
                isSwapped =true;
            }

        }  
         if(isSwapped==false){
            break;
        }  
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
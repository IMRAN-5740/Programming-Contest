#include<bits/stdc++.h>
using namespace std;
int main()
{
   int row, col;
   cin>>row;
 
   cin>>col;

  int matrix[row+1][col+1], transMatrix[col+1][row+1]; 
  
   for(int i =0;i<row;i++) 
   {
     for(int j=0;j<col;j++) 
     {
       cin>>matrix[i][j];
     }
   }
   
  for(int i=0;i<row;i++) 
  {
    for(int j=0;j<col;j++) 
    {
      transMatrix[j][i] = matrix[i][j];
    }
  }
  
  
  for(int i=0;i<col;i++) 
  {
    for(int j=0;j<row;j++) 
    {
      cout<<transMatrix[i][j]<<" ";
      
      if(j==row-1)
      {
      	cout<<endl;
      }   
    }
  }
  return 0;
}
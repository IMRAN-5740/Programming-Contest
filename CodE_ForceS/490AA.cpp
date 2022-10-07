// #include<bits/stdc++.h>
// using namespace std;
// int a[4];
// int main()
// {
// 	   int n,value,i;
// 	   cin>>n;
// 	   int a1[n+1];
// 	   int a2[n+1];
// 	   int a3[n+1];

// 	   for(i=1;i<=n;i++)
// 		   {
// 		       cin>>value;
// 		       if(value==1) 
// 		       	{
// 		       		a1[a[1]]=i;
// 		       		a[1]++;
// 		       	}
// 		       else if(value==2) 
// 		       	{
// 		       		a2[a[2]]=i;
// 		       		a[2]++;
// 		       	}
// 		       else 
// 		       	{
// 		       		a3[a[3]]=i;
// 		       		a[3]++;
// 		       	}
// 		   }
		   
//    sort(a+1,a+4);
//    int team=a[1];
//    printf("%d\n",team);
 
//    for(int i=1;i<=team;i++)
//    {
//        printf("%d %d %d\n",a1[i-1],a2[i-1],a3[i-1]);
//    }
// 	return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,gifted,arr[4][5001],count[4]={0},nteam;
 cin>>n;
 for(int id=1 ;id<=n;id++)
 {
	 cin>>gifted;
	 count[gifted]++;
	 arr[gifted][count[gifted]]=id ;
	 

 }
 //nteam=min(min(count[1],count[2]),count[3]);
 sort(count+1,count+4);
 nteam=count[1];
 cout<<nteam<<endl;
 for(int i=1;i<=nteam;i++)
	 cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;

	return 0 ;
}
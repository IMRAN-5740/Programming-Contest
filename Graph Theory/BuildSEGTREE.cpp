#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx*4];

void Build_Seg_Tree(int node,int L,int R)
{	
	if(L==R)
	{
		tree[node]=arr[L];
		return;
	}
	int Left=node*2;
	int Right=node*2+1;
	int mid=(L+R)/2;
	Build_Seg_Tree(Left,L,mid);
	Build_Seg_Tree(Right,mid+1,R);
	tree[node]=tree[Left]+tree[Right];
}
int Query_Seg_Tree(int node,int L,int R,int l,int r)
{
	if(r<L or l>R)
	{
		return 0;
	}
	else if (l<=L and R<=r)
	{
		return tree[node];
	}
	int mid=(L+R)/2;
	int Left=node*2;
	int Right=node*2+1;
	int x=Query_Seg_Tree(Left,L,mid,l,r);
	int y=Query_Seg_Tree(Right,mid+1,R,l,r);
	return x+y;
} 
void Update_Value_Seg_Tree(int node,int L,int R,int pos,int value)
{
	if(pos<L or pos>R)
	{
		return;
	}
	if(pos<=L and R<=pos)
	{
		tree[node]=value;
		return;
	}
	// if(L==R)
	// {
	// 	tree[node]=tree[at]+value;
	// 	return;
	// }

	int mid =(L+R)/2;
	int Left=node*2;
	int Right=node*2+1;
	// if(pos<=mid)
	// {
	// 	Update_Value_Seg_Tree(Left,L,mid,pos,value);
	// }
	// else
	// {
	// 	Update_Value_Seg_Tree(Right,mid+1,R,pos,value);
	// }
	Update_Value_Seg_Tree(Left,L,mid,pos,value);
	Update_Value_Seg_Tree(Right,mid+1,R,pos,value);
	tree[node]=tree[Left]+tree[Right];
}

int main()
{
	int n;
	cout<<"Enter the number of n :"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	Build_Seg_Tree(1,1,n);
	for(int i=1;i<3*n;i++)
	{
		cout<<tree[i]<<" ";
	}
	cout<<endl;
	int pos,value;
	cout<<"Enter the number of pos and value to update array :"<<endl;
	cin>>pos>>value;
	
	
	 Update_Value_Seg_Tree(1,1,n,pos,value);
	 for(int i=1;i<3*n;i++)
	{
		cout<<tree[i]<<" ";
	}
	cout<<endl;
	int b,e;
	cout<<"Enter the range between  L and R:";
	cin>>b>>e;
	int res= Query_Seg_Tree(1,1,n,b,e);
	cout<<"Query Sum:"<<res<<endl;
	
	//Update_Value_Seg_Tree(1,1,n,2,2);
//	cout<<Query_Seg_Tree(1,1,n,2,2);
	return 0;
}


/*Input :

7
4 -9 3 7 1 0 2
*/
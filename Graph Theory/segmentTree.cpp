#include<bits/stdc++.h>
using namespace std;
int sum[400000];

void Build_Seg_Tree(int at,int L,int R)
{
	sum[at]=0;
	
	if(L==R)
	{
		return;
	}
	int mid=(L+R)/2;
	Build_Seg_Tree((at*2),L,mid);
	Build_Seg_Tree((at*2)+1,mid+1,R);
	sum[at]=sum[(at*2)]+sum[(at*2)+1];

}
void Update_Value_Seg_Tree(int at,int L,int R,int pos,int value)
{
	if(pos<L or pos>R)
	{
		return;
	}
	if(L==R)
	{
		sum[at]=sum[at]+value;
		return;
	}

	int mid =(L+R)/2;
	if(pos<=mid)
	{
		Update_Value_Seg_Tree((at*2),L,mid,pos,value);	
	}
	else
	{
		Update_Value_Seg_Tree((at*2)+1,mid+1,R,pos,value);
	}
	sum[at]=sum[(at*2)]+sum[(at*2)+1];
}

int Query_Seg_Tree(int at,int L,int R,int l,int r)
{
	if(r<L or l>R)
	{
		return 0;
	}
	else if (l<=L and R<=r)
	{
		return sum[at];
	}
	int mid=(L+R)/2;
	int Left=node*2;
	int Right=node*2+1;
	int x=Query_Seg_Tree(Left,L,mid,l,r);
	int y=Query_Seg_Tree(Right,mid+1,R,l,r);
	return x+y;
} 

int main()
{
	return 0;
}
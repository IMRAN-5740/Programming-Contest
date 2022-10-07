#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(2);
	v.push_back(12);
	v.push_back(566);
	while(!v.empty())
	{
		cout<<v[v.size() - 1] << " ";
		v.pop_back();
	}
	puts("");

// 	//Queue==FIFO
// 	// queue<int>q;
// 	// q.push(10);
// 	// q.push(12);
// 	// q.push(55);
// 	// q.push(5);
// 	// while(!q.empty())
// 	// {
// 	// 	cout<<q.front()<<endl;
// 	// 	q.pop();
// 	// }

// 	//Stack-LIFO
// 	// stack<int>q;
// 	// q.push(10);
// 	// q.push(12);
// 	// q.push(55);
// 	// q.push(5);
// 	// while(!q.empty())
// 	// {
// 	// 	cout<<q.top()<<endl;
// 	// 	q.pop();
// 	// }
// 	//Priority _queue// Max value age return kore
// 	//priority_queue<int,vector<int>,greater<int>>q
// 	// q.push(10);
// 	// q.push(12);
// 	// q.push(55);
// 	// q.push(5);
// 	// while(!q.empty())
// 	// {
// 	// 	cout<<q.top()<<endl;
// 	// 	q.pop();
// 	// }

// 	//Minimum value age return korar jonno eta use korte hobe so that negative value push kore dile +i hoye jabe

// 	// priority_queue<int>q;
// 	// q.push(-10);
// 	// q.push(-12);
// 	// q.push(-55);
// 	// q.push(-5);
// 	// while(!q.empty())
// 	// {
// 	// 	cout<<(q.top()*-1)<<endl;
// 	// 	q.pop();
// 	// }
// //	Minimum value age return korar another way :
// 	// priority_queue<int,vector<int>,greater<int>>q;
// 	// q.push(10);
// 	// q.push(12);
// 	// q.push(55);
// 	// q.push(5);
// 	// while(!q.empty())
// 	// {
// 	// 	cout<<q.top()<<endl;
// 	// 	q.pop();
// 	// }
	return 0;
}



/*
//Adjaccency matrix:
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int node,edge;
	cin>>node>>edge;
	vector<vector<int>>g(node+1,vector<int>(node+1,0))
	for(int i=0;i<edge;i++)
	{
		ll x,y;
		cin>>x>>y;
		g[x][y]=1;
		g[y][x]=1;

	}
	int n;
	cin>>n;
	for(int i=1;i<=node;i++)
	{
		if(g[n][i]==1)
		{
			cout<<i<<" "; 
		}
	}
	return 0;
}

*/


// #include<bits/stdc++.h>
// #define ll long long 
// using namespace std;
// int main()
// {
// 	int node,edge;
// 	cin>>node>>edge;
// 	//vector<vector<int>>g(node+1,vector<int>(node+1,0));
// 	vector<int> g[node+1];
// 	for(ll i=0;i<edge;i++)
// 	{
// 		int x,y;
// 		cin>>x>>y;
// 		g[x].push_back(y);
// 		g[y].push_back(x);
// 	}
// 	int n;
// 	cin>>n;
// 	for(ll i=0;i<g[n].size();i++)
// 	{
// 		cout<<g[n][i]<<" ";
// 	}
// 	cout<<endl;
// 	return 0;
// }
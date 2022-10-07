#include<bits/stdc++.h>
using namespace std;
int arr[200000+5];
int brr[200000+5];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x=arr[0];
	int k=0;
	vector<int>vec;
	vector<int>::iterator it;
	for(int i=0;i<n;i++)
	{
		int l=arr[i]-1;
		int r=arr[i]+1;

			if(arr[i]==l || arr[i]==r)
			{
				
			}else
			{
				int cnt=arr[i];
				vec.push_back(cnt);
			}
		
	}
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	

	return 0;
}
  vector<int>ans;
map <int, int> m;
for(int i=0; i<nums.size(); i++){
m[nums[i]]++;
}
for(int i=0; i<nums.size(); i++){
if(m[nums[i]]==1 && m.find(nums[i]-1)==m.end() && m.find(nums[i]+1)==m.end()){
ans.push_back(nums[i]);
}
}
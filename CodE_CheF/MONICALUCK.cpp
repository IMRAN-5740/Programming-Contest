#include <bits/stdc++.h>
#define FastID ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void removeDups(string arr[], int n)
{
    unordered_map<string, bool> mp;
     int k=0;
    for (int i = 0; i < n; ++i) 
    {
        if (mp.find(arr[i]) == mp.end()) 
        {
            k++;
        }

        mp[arr[i]] = true;
    }
    cout<<k<<endl;
}
 
int main()
{
     
   	FastID;
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    
    removeDups(arr, n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s, s1;
  getline(cin, s);
  int len = s.size();
  for (int i = 0; i < len; i++)
  {
    if (s[i] >= 'A' and s[i] <= 'Z')
    {
      s[i] = char(s[i] + 32);
    }
  }
  cout << s << endl;

  int cnt = 0;
  for (int i = 0, j = 0; i < len; i++)
  {
    if (s[i] >= 'a' and s[i] <= 'z')
    {
      if (cnt == 0)
      {
        cnt = 1;
        s1.push_back(char(s[i] - 32));
      }
      else
      {
        s1.push_back(s[i]);
      }
    }
    else if (s[i] >= '0' and s[i] <= '9')
    {
      s1.push_back(s[i]);
    }
    else
    {
      if (s[i] == ' ') {
        s1.push_back(s[i]);
        cnt = 0;
      }
    }
    // for(int i=0;i<len;i++)
    // {
    //   cout<<s1[i];
    // }
      }
      cout << s1 << endl;
  return 0;
}
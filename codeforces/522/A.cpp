 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  map<string,int> mp;
  while(n--)
  {
    string str,str1,str2;
    cin>>str>>str1>>str2;
    for(int i=0;i<str.length();i++)
    {
      str[i]=tolower(str[i]);
    }
    for(int i=0;i<str2.length();i++)
    {
      str2[i]=tolower(str2[i]);
    }
    
    mp[str]=mp[str2]+1;
  }
  int cmax=0;
  for(auto x: mp)
  {
    cmax=max(cmax,x.second);
  }
  cout<<cmax+1;
  

  return 0;
}
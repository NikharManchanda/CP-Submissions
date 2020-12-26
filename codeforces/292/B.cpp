 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<int,int> mp;
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;i++)
  {
    int a,b;
    cin>>a>>b;
    mp[a]++,mp[b]++;
  }
  int a=0,b=0,c=0;
  for(int i=1;i<=n;i++)
  {
     if(mp[i]==1)
      a++;
    else if(mp[i]==2)
      b++;
     else if(mp[i]==n-1)
      c++;
  }
  if(b==n)
  {
    cout<<"ring topology";
  }
  else if(b==n-2 && a==2)
  {
    cout<<"bus topology";
  }
  else if(c==1 && a==n-1)
  {
    cout<<"star topology";
  }
  else
    cout<<"unknown topology";
  
  
  return 0;
}
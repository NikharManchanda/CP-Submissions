 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
      string str;
      cin>>str;
      int ans=1,cmax=1;
      for(int i=0;i<str.length();i++)
      {
        if(str[i]=='L')
          ans++;
        else
          {
           cmax=max(cmax,ans);
            ans=1;
          }

      }
      cmax=max(cmax,ans);
      cout<<cmax<<endl;

    }

 return 0;
}
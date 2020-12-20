#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
        freopen("Ip-A.txt","r",stdin);
        freopen("Op-A.txt","w",stdout);
 
     #endif
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string str;
      cin>>str;
      int c=0;
      for(int i=n-1;i>=0;i--)
      {
        if(str[i]==')')
          c++;
        else
          break;
      }
      if(c>n-c)
        cout<<"Yes"<<endl;
      else cout<<"No"<<endl;

    }
    

 return 0;
}
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
    long long int p;
    cin>>p;
    while(p--)
    {
      long long int n;
      cin>>n;
      
      
      while(1)
      {
        long long int t=n;
        while(t>0)
      {
        int visited[10]{0};
        visited[0]=1;
        long long int x=t%10;
        
        if(visited[x]==1)
        {
          t=t/10;
          continue;
        }
        if(x!=0)
        {

          if(n%x!=0)
          {

            n++;
            break;
          }
          else
          visited[x]=1;
        }
        
        t=t/10;
        
      }
      
      if(t==0)
      {
        cout<<n<<endl;
        break;
      }

      }
      

    }
    

 return 0;
}
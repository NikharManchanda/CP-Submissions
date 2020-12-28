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
    int n;
    cin>>n;
    char m[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      { 
        cin>>m[i][j];
      }
    }
    int flag=1;
    for(int i=0;i<n;i++)
    {
      if(flag==0)
        break;
      for(int j=0;j<n;j++)
      {
        if(m[i][j]=='1')
        {
           if( i==n-1 || j==n-1 )
            continue;
           else if(m[i][j+1]=='1' || m[i+1][j]=='1')
            continue;
           else
            {flag=0;break;}
        }
      }
    }
    if(flag==0)
      cout<<"NO"<<endl;
    else 
      cout<<"YES"<<endl;

  }
  
  
  return 0;
}


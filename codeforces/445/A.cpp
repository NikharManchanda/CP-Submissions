 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>arr[i][j];
      }
    }
    for(int i=1;i<=n;i++)
    {

      if(i%2==1)
      for(int j=1;j<=m;j++)
      {
        if(arr[i-1][j-1]=='-')
        {
          cout<<arr[i-1][j-1];
        }
        else
           if(j%2==1)
            cout<<"B";
           else 
            cout<<"W";
      }
      else
        for(int j=1;j<=m;j++)
      {
        if(arr[i-1][j-1]=='-')
        {
          cout<<arr[i-1][j-1];
        }
        else
           if(j%2==0)
            cout<<"B";
           else 
            cout<<"W";
      }

      cout<<endl;
    }

 return 0;
}
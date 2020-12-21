 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    
    for(int i=1;i<=n;i++)
      cin>>arr[i];

    for(int i=1;i<=n;i++)
    {
       bool visited[n+1]{false};
       visited[i]=true;
       int k=arr[i];
       while(1)
     {
      if(visited[k]==true)
      {
        cout<<k<<" ";
        break;
      }
      visited[k]=true;
      k=arr[k];

     }
   }
   

    

    


    

 return 0;
}
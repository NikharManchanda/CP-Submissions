#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  /*
  #ifndef ONLINE_JUDGE

    freopen("IP-A.txt", "r", stdin);
    freopen("OP-A.txt", "w", stdout);

  #endif
  */
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n];
      long long int a=0,b=0;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      sort(arr,arr+n,greater<int>());
      for(int i=0;i<n;i++)
      {
          if(i%2==0)
          {
              if(arr[i]%2==0)
              a+=arr[i];
          }
          else
          {
              if(arr[i]%2!=0)
              b+=arr[i];
          }
          
      }
      if (a == b)
      cout << "Tie" << endl;
    else if (a > b)
      cout << "Alice" << endl;
    else
      cout << "Bob" << endl;
  }

  return 0;

}

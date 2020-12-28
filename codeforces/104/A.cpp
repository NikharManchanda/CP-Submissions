 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  n=n-10;
  if(n<=0)
    cout<<0;
  else if(n==1 || n==11)
  {
    cout<<4;
  }
  else if(n>=2 && n<=9)
    cout<<4;
  else if(n==10)
    cout<<15;
  else
    cout<<0;
 
  
  return 0;
}
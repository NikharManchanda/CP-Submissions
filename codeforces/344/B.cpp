 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a,b,c;
  cin>>a>>b>>c;
  int x=a-c+b;
  x=x/2;
  int y=b+c-a;
  y=y/2;
  int z=a-b+c;
  z=z/2;
  int d=0;
  if(x==0)
    d++;
  if(y==0)
    d++;
  if(z==0)
    d++;
  if((a+b+c)%2!=0)
  {
     cout<<"Impossible";
     return 0;
  }
  if(x>=0 && y>=0 && z>=0 && d<=1)
  {
    cout<<x<<" "<<y<<" "<<z;
  }
  else
  {
    cout<<"Impossible";
  }





  

  return 0;
}
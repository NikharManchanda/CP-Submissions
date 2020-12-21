 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int x,y,a,b,c,d;
    cin>>x>>y>>a>>b>>c>>d;
    if(a>x && b>y && c>x && d>y)
        cout<<"YES";
    else if(a<x && b>y && c<x && d>y)
  cout<<"YES";
      else if(a>x && b<y && c>x && d<y)
        cout<<"YES";
      else if(a<x && b<y && c<x && d<y)
cout<<"YES";
else 
cout<<"NO";

 return 0;
}
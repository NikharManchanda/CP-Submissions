 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int r1,c1,r2,c2;
   cin>>r1>>c1>>r2>>c2;
   int a=0;
   if(abs(r1-r2)!=0)
    a++;
   if(abs(c1-c2))
    a++;
   cout<<a<<" ";
   if((r1+c1)%2==(r2+c2)%2)
   {
     if(abs(r1-r2)==abs(c1-c2))
      cout<<1<<" ";
    else 
      cout<<2<<" ";
   }
   else
   {
    cout<<0<<" ";
   }
   cout<<max(abs(r1-r2),abs(c1-c2));

 return 0;
}
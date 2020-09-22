#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
   #endif
   int t;
   cin>>t;
   int c=0;
   bool flag;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       if(a==b)
       {

        c++;
        flag=true;
       }
    else
       { c=0;
        flag=false;
       }
       if(c==3)
        {
            cout<<"Yes";
            return 0 ;
        }
   }
   cout<<"No";
   
    return 0;
}







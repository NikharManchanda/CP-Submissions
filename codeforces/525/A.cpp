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
 
   int n;
   cin>>n;
   string str;
   cin>>str;
   map<char,int> mp;

   int c=0;
   for(int i=0;i<( 2*n - 2 );i++)
   {
       if(i%2==0)
       {
         mp[(str[i])]++;
       }
       else
       {  char z=tolower(str[i]);
          
          if(mp[z]>0)
          { 
            mp[z]--;
          }
          else
            c++;
       }
   }
   
   cout<<c;

return 0;
}

 
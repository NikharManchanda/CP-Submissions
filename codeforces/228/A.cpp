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
   set <int> s;
   int a,b,c,d;
   for(int j=0;j<4;j++)
   {
    int i;
    cin>>i;
   s.insert(i);
    }
   cout<<4-s.size();


return 0;
}

 
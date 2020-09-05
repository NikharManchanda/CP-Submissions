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
   unordered_map<string,int> mp;
   while(t--)
   {
       string str;
       cin>>str;
       mp[str]++;
       if(mp[str]==1)
        cout<<"OK"<<endl;
      else
        cout<<str<<mp[str]-1<<endl;
   }

return 0;
}

 
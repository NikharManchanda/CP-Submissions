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
   string str;
   cin>>str;
   if(str[str.size()-1]=='s')
    str=str+"es";

    else 
        str=str+'s';
   cout<<str;   

    return 0;
}







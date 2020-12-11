#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("Ip-A.txt","r",stdin);
    freopen("Op-A.txt","w",stdout);
 
   #endif
 
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<char> s;
    for(int i=0;i<str.length();i++){
      s.insert(tolower(str[i]));
    }
    if(s.size()==26)
      cout<<"YES";
    else
      cout<<"NO";
  

  
 return 0;
}
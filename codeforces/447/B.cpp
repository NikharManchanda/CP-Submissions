#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin>>str;
    long long int sum=0;
    int k;
    cin>>k;
    int cmax=INT_MIN;
    map<char,int> mp;
    for(int i=1;i<=26;i++)
    {
      int l;
      cin>>l;
      cmax=max(cmax,l);
      mp[((char)'a'+i-1)]=l;
    }    
    int n=str.length();
    for(int i=1;i<=n;i++)
    {
      sum+=mp[str[i-1]]*i;
    }
   
    sum=sum + cmax*(k*n + ((k)*(k+1)/2) );
    cout<<sum;


    

 return 0;
}
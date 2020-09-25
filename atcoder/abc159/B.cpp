#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
long long int power(int a,int b)
{
    if(b==0)
        return 1;
    long long int k=power(a,b/2);
    if(b%2==0)
        return ((k%M)*(k%M))%M;
    else
        return ((k%M)*(k%M)*(a%M))%M;
}
long long int fact(long long int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return ((n%M)*(fact(n-1)%M))%M;

}
int div(int n)
{  int c=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
          c++;
        }
    }
    c=c*2;
    if(pow(sqrt(n),2)==(sqrt(n)*sqrt(n)))
        c++;
    return  c;
}
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
  string s;
   int n=str.length();
  for(int i=0;i<n;i++)
  {
    s=s+str[n-i-1];
  }
  if(s!=str)
   { cout<<"No";
      return 0;
}
 string s1,s2;

 for(int i=0;i<(n-1)/2;i++)
    s1=s1+str[i];
 for(int i=(n+3)/2 -1 ;i<n;i++)
    s2=s2+str[i];
string s3,s4;
for(int i=0;i<s1.length();i++)
  {
    s3=s3+s1[(s1.length())-i-1];
  }
  if(s3!=s1)
{    cout<<"No";
    return 0;
}
for(int i=0;i<s2.length();i++)
  {
    s4=s4+s2[(s2.length())-i-1];
  }
   if(s4!=s2)
    cout<<"No";
else 
    cout<<"Yes";



 return 0;
}







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
   

 int a,b,c,d;
 cin>>a>>b>>c>>d;
 if(b<c || a>d)
    cout<<0;
else if(b>=d && a<=c)
    cout<<d-c;
else if(b<=d && a>=c)
    cout<<b-a;
else if(b<=d && b>=c && a<=c && b<=d)
    cout<<b-c;
else if(a>=c && b>=d && d>=a)
    cout<<d-a;
else 
    cout<<b-c;



 return 0;
}







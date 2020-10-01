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
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
          if(n/i==i)
            c++;
          else
            c+=2;
        }

    }

    
    return  c;
}
int func(int n)
{
    return (n*(n+1))/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
   #endif
      
     long long int l,r,i;
     cin>>l>>r;
     for( i=l;i<=r;i++)
     {
        long long int j;
        for(j=i+1;j<=r;j++)
        {
            if(__gcd(i,j)==1)
            {
                for(long long int k=j+1;k<=r;k++)
                {
                    if(__gcd(j,k)==1)
                    {
                        if(__gcd(i,k)!=1)
                        {
                            cout<<i<<" "<<j<<" "<<k;
                            return 0;
                        }
                    }
                }
            }
        }
        
     }
     
     if(i==r+1)
        {
            cout<<-1;
            return 0;
        }

        

 return 0;
}







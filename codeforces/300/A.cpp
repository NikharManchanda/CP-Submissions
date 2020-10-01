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
      
      int n;
      cin>>n;
      int c=0;
      std::vector<int> v(n),v1,v2,v3;
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
          if(v[i]<0)
            c++;
          if(v[i]==0)
            v3.push_back(0);
      }
      int g=0;
     bool flag=0;
     if(c%2!=0)
     {
        for(int i=0;i<n;i++)
        {
            if(v[i]<0 && flag==0)
             {
                v1.push_back(v[i]);
                flag=1;
             }
             else if(v[i]!=0)
             {
                 v2.push_back(v[i]);
             }
        }

     }
     else 
     {
        for(int i=0;i<n;i++)
        {
            if(v[i]<0 && g!=2)
            {
                g++;
                if(g==1)
                v1.push_back(v[i]);
                else if(g==2)
                {
                    v3.push_back(v[i]);
                }
            }
            else if(v[i]!=0)
            {
                v2.push_back(v[i]);
            }

        }
     }

     cout<<v1.size()<<" ";
     for(auto x: v1)
        cout<<x<<" ";
    cout<<endl;
     cout<<v2.size()<<" ";
     for(auto x: v2)
        cout<<x<<" ";
    cout<<endl;
     cout<<v3.size()<<" ";
     for(auto x: v3)
        cout<<x<<" ";
    cout<<endl;


 return 0;
}







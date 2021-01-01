/***from dust i have come, dust i will be***/
 
#include <bits/stdc++.h>
#include <fstream>
#include<chrono>
#include<fstream>
using namespace std;
using namespace chrono;
 
 
#define mod 1000000007
#define endl "\n";
#define ll long long
#define db double
#define deb(x) cout<<#x<<" : "<<x<<"\n"
#define pb push_back
#define fi first
#define se second
#define ms(x,y) memset(x,y,sizeof x)
#define all(x)  (x).begin(),(x).end()
#define fo(i, n) for(i=0 ; i<n ; i++)
#define Fo(i, k, n) for(i=k ; i<n ; i++)
#define setBits(x) __builtin_popcountll(x)
#define parity(x) __builtin_parity(x)
#define pi 3.14159265358979323846
#define pp pair<int,int>
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }
int dx8[]={1,1,0,-1,-1,-1, 0, 1}; 
int dy8[]={0,1,1, 1, 0,-1,-1,-1};
int dx4[]={1, 0, -1, 0};
int dy4[]={0, 1, 0, -1};
 
/////////////////////////////////////////////////////////////////////////
 
 
bool sortbysecdesc(const pair<int,int> a,
                   const pair<int,int> b)
{
    return a.second>=b.second;
}
 
int __gcd(int a,int b)
{
    if(a+b==0) return a+b;
    if(a%b==0) return b;
    return __gcd(b,a%b);
}
 
ll fact(int n) 
{ 
    ll res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
 
 
ll nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
 
void solve()
{
    int n, x, count[8] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        count[x] += 1;
    }

    bool solution;
    if (count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6])
    {
        for (int i = 0; i < count[4]; ++i)
        {
            printf("1 2 4\n");
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i)
        {
            printf("1 2 6\n");
        }
        for (int i = 0; i < count[3]; ++i)
        {
            printf("1 3 6\n");
        }
    }
    else
    {
        printf("-1\n");
    }
    return;
}
 
int32_t main()
{
    solve();
    return 0;
}
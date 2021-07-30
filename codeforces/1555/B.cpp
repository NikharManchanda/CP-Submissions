#include "bits/stdc++.h"
using namespace std;

#define int               long long
#define nl                "\n"
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).rbegin(),(x).rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define fix(prec)         {cout << setprecision(prec) << fixed;}
#define lcm(a, b)         ((a) * (b)) / __gcd(a, b)
#define rev               greater<int>()
#define Max(x,y,z)        max(x,max(y,z))
#define Min(x,y,z)        min(x,min(y,z))
#define imin              INT_MIN
#define imax              INT_MAX
#define Yes               cout<<"Yes\n"
#define No                cout<<"No\n"
#define YES               cout<<"YES\n"
#define NO                cout<<"NO\n"
#define yes               cout<<"yes\n"
#define no                cout<<"no\n"
#define show(A) for (auto i: A) cout << i << " "; cout << '\n';
#define endl "\n"

using ld = long double;
using vi = vector < int > ;
using mi = map < int, int > ;
using pi = pair < int, int > ;

const double Pi = acos(-1.0);
const int inf = 1e18 + 1;
const int M = 1e9 + 7;
const int MM = 998244353;

const int N = 2e5 + 5;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
/*----------------------------------------------------------------------------------------*/
void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
/*----------------------------------------------------------------------------------------*/
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // setIO("diamond");
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int w, h;
        cin >> w >> h;
        int ans = imax;

        //c1
        if (x1 <= w && y1 <= h)
        {
            //inter
            if (x2 + w - x1 <= X)
                ans = min(ans, w - x1);
            if (y2 + h - y1 <= Y)
                ans = min(ans, h - y1);
        }
        else if (x1 > w || y1 > h)
        {
            cout << 0 << nl;
            continue;
        }
        if (x2 >= X - w && y1 <= h)
        {
            if (x1 - (x2 - (X - w)) >= 0)
                ans = min(ans, x2 - (X - w));
            if (y2 + h - y1 <= Y)
                ans = min(ans, h - y1);
        }
        else if (x2 < X - w || y1 > h)
        {
            cout << 0 << nl;
            continue;
        }
        if (w >= x1 && Y - h <= y2)
        {
            if (x2 + w - x1 <= X)
                ans = min(ans, w - x1);
            if (y1 - (y2 - (Y - h)) >= 0)
                ans = min(ans, y2 - (Y - h));

        }
        else if (w < x1 || Y - h > y2)
        {
            cout << 0 << nl;
            continue;
        }
        if (X - w <= x2 && Y - h <= y2)
        {
            if (y1 - (y2 - (Y - h)) >= 0)
                ans = min(ans, y2 - (Y - h));
            if (x1 - (x2 - (X - w)) >= 0)
                ans = min(ans, x2 - (X - w));
        }
        else if (X - w > x2 && Y - h > y2)
        {
            cout << 0 << nl;
            continue;
        }

        if (ans == imax)
            cout << -1 << nl;
        else
        {
            cout << ans << ".";
            for (int d = 1; d <= 9; d++)
                cout << 0;
            cout << nl;
        }

    }

    return 0;

}


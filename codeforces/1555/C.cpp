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
        int n = 2, m;
        cin >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int p[2][m], s[2][m];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                p[i][j] = a[i][j];
                if (j > 0)
                    p[i][j] += p[i][j - 1];
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (j != m - 1)
                    s[i][j] = s[i][j + 1] + a[i][j];
                else
                    s[i][j] = a[i][j];
            }
        }

        int ans = imax;
        for (int i = 0; i < m; i++)
        {
            if (i > 0 && i < m - 1)
                ans = min(ans, max(p[1][i - 1] , s[0][i + 1]));
            else if (i == 0 && i + 1 < m)
                ans = min(ans, s[0][1]);
            else if (i == m - 1 && m - 2 >= 0)
                ans = min(ans, p[1][m - 2]);
        }
        if (ans == imax)
            cout << 0 << nl;
        else
            cout << ans << nl;
    }

    return 0;

}


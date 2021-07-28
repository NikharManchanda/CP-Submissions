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

const int N = 1e5 + 5;

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

    // setIO("mountains");

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);
        int f = 0;
        for (int i = 0; i < 2 * n; i += 2)
        {
            if (a[i] != a[i + 1])
            {
                NO;
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            continue;
        }
        vector<int> v;
        for (int i = 0; i < 2 * n; i += 2)
        {
            v.pb(a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
            {
                f = 1;
                NO;
                break;
            }
        }
        if (f)
            continue;

        int sum = 0;
        set<int> x;
        for (int i = n - 1; i >= 0; i--)
        {
            int idx = i + 1;
            int val = 2 * idx;
            if ((v[i] - 2 * sum) % val != 0)
            {
                NO;
                f = 1;
                break;
            }
            if (v[i] - 2 * sum <= 0)
            {
                NO;
                f = 1;
                break;
            }
            x.insert((v[i] - 2 * sum) / (2 * idx));
            sum += ((v[i] - 2 * sum) / (2 * idx));
        }
        if (f)
            continue;
        if (x.size() == n)
            YES;
        else
            NO;

    }



    return 0;

}


#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define para(X,Y) for (ll (X) = 0;(X) < (Y);++(X))
#define paraIni(X,S,Y) for (ll (X) = S;(X) < (Y);++(X))
#define rpara(X,Y) for (ll (X) = (Y)-1;(X) >=0;--(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()
#define unicos(X) (X).erase(unique(all(X)),(X).end())
#define NL <<"\n"
#define EPS 1e-6
#define MOD 1000000007
#define iinf 0x3f3f3f3f
#define llinf 0x3f3f3f3f3f3f3f3f
#define ll long long
#define pii pair<int, int>
#define pll pair<long, long>
using namespace std;


vector<ll> a;
vector<ll> b;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll n;
    cin >> n;
    ll sumA=0;
    ll sumB=0;
    ll last=0;
    for (ll i = 0; i < n; ++i)
    {
    	ll x;
    	cin >> x;
    	if (x>0)
    	{
    		sumA+=x;
    		a.pb(x);
    		last=1;
    	}
    	else
    	{
    		sumB+=-x;
    		b.pb(-x);
    		last=2;
    	}
    }
    // cout << sumA << " " <<sumB<<endl;
    if (sumB!=sumA)
    {
    	if (sumA>sumB)
    		printf("first\n");
    	else
    		printf("second\n");
    }
    else
    {
    	ll vence=0;
    	ll iguais=0;   	
    	for (ll i = 0; i < min(a.size(), b.size()); ++i)
    	{
    		if (a[i] == b[i]) iguais++;
    		else if (a[i] > b[i]) vence=1;
    		else vence=2;
    		if (vence) break;
    	}
    	if (!vence && iguais == min(a.size(), b.size()))
    	{

    		if (a.size()<b.size())
    			vence = 1;
    		else if (b.size() < a.size())
    			vence = 2;
    	}
    	if (vence)
    	{
    		if (vence==1)
    			printf("first\n");
	    	else
	    		printf("second\n");
    	}
    	else
    	{
    		if (last==1)
    			printf("first\n");
	    	else
	    		printf("second\n");

    	}
    }
    return 0;
}
#include <bits/stdc++.h> 
using namespace std;
int N, Q;
string S;
int main() {
	cin >> N >> S >> Q;
	for(int i = 0; i < Q; i++){
		int m, ma = 0; char c;
		cin >> m >> c;

		int l, r;
		l = r = 0;
		while(l < N && r < N) {
			while(r < N) {
				if(S[r] != c) {
					if(m == 0) break;
					m--;
				}
				r++;
			}

			ma = max(ma, r - l);

			m += S[l++] != c;
		}

		cout << ma << endl;
	}
}

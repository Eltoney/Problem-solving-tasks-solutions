#include <bits/stdc++.h>

using namespace std;

#define el				'\n'
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define fastIO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define doublePrecision(a) cout << fixed << setprecision(a)

double const EPS = 1e-8, PI = acos(-1);
const int N = 2000 + 9, M = 25 + 7, OO = (int) 1e8;
const long long MOD = 1e9 + 7, INF = 1e18 + 9;

typedef long long ll;
typedef long double lld;

void INPUT() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	string pre;
	cin >> pre;
	int s1 = 0, u1 = 0, w1 = 0, s2 = 0, u2 = 0, w2 = 0, r1 = 5, r2 = 5;
	int ans = 10;
	for (int i = 0; i < 11; i++) {
		if (i % 2 == 0) {
			(pre[i] == '?' ? u1++ : (pre[i] == '1') ? s1++ : w1++);
			r1--;
		} else {
			(pre[i] == '?' ? u2++ : (pre[i] == '1') ? s2++ : w2++);
			r2--;
		}
		if ((s2 + u2) > (s1 + r1)) {
			ans = min(ans, i + 1);
		}
		if ((s1 + u1) > (s2 + r2)) {
			ans = min(ans, i + 1);
		}
	}
	cout << ans << el;

}

int main() {
	doublePrecision(0);
	fastIO;
	INPUT();
//	freopen("poet.in", "r", stdin);

	int t;
//	t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}


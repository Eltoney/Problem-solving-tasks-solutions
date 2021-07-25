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
	int h, w;
	cin >> h >> w;

	int ans[h][w];
	clr(ans, 0);

	for (int i = 0; i < h; i += 2) {
		if (i == 0 || i == h - 1) {
			for (int j = 0; j < w; j += 2) {
				ans[i][j] = 1;
			}

		} else {
			ans[i][0] = 1, ans[i][w - 1] = 1;
		}
	}
	if (h % 2 == 0) {
		ans[h - 2][0] = 0, ans[h - 2][w - 1] = 0;
		for (int j = 0; j < w; j += 2) {
			ans[h - 1][j] = 1;
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << ans[i][j];
		}
		cout << el;
	}

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


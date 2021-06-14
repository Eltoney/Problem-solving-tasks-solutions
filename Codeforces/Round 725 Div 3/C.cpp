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
//	freopen("alimagde.in", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		int low = l - v[i];
		int hig = r - v[i];
//		cout << (v.begin() + i + 1) - v.begin() << el;
		auto it1 = lower_bound(v.begin() + i + 1, v.end(), low)
				- (v.begin() + i + 1);
		auto it2 = upper_bound(v.begin() + i + 1, v.end(), hig)
				- (v.begin() + i + 1);
//		cout << low << " " << it1 << " " << hig << " " << it2 << el;
		ans += it2 - it1;
	}
	cout << ans << el;
}

int main() {
	doublePrecision(0);
	fastIO;
	INPUT();
//	freopen("help.in", "r", stdin);

	int t;
//	t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}


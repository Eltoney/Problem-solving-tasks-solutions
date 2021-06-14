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

bool found(int left, int right, int mnId, int mxId) {
	if (left < mnId && mnId < right)
		return 0;
	if (left < mxId && mxId < right)
		return 0;
	return 1;
}

void solve() {
	int n, mn = 101, mnId = -1, mx = 0, mxId;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] < mn)
			mn = v[i], mnId = i;
		if (v[i] > mx)
			mx = v[i], mxId = i;
	}
	int ans = n;
	for (int i = -1; i < n; i++) {
		for (int j = n; j > i; j--) {
			if (found(i, j, mnId, mxId)) {
				ans = min(ans, i + 1 + n - j);
			}

		}
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


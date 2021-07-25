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
	int n, k;
	cin >> n >> k;
	vector<int> v(n), ans(n, 0);
	map<int, vector<int>> ids;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		ids[v[i]].push_back(i);
	}
	vector<vector<int>> colors(k + 1);
	int col = 1;
	for (auto num : ids) {
		int cnt = 0;
		for (auto x : num.second) {
			cnt++;
			colors[col++].push_back(x);
			if (col > k) {
				col = 1;
			}
			if (cnt == k) {
				break;
			}
		}
	}
	int lmt = n + 1;
	for (int i = 1; i <= k; i++) {
		lmt = min(lmt, sz(colors[i]));
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < lmt; j++) {
			ans[colors[i][j]] = i;
		}
	}
	for (auto x : ans) {
		cout << x << " ";
	}
	cout << el;
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


#include <bits/stdc++.h>

using namespace std;

#define el				'\n'
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define fastIO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define doublePrecision(a) cout << fixed << setprecision(a)

double const EPS = 1e-8, PI = acos(-1);
const int N = 2e5 + 9, M = 25 + 7, OO = (int) 1e8;
const long long MOD = 1e9 + 7, INF = 1e18 + 9;

typedef long long ll;
typedef long double lld;

void INPUT() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
}
/*
 * “chimasu” “rimasu” ==>  “tte”
 * “mimasu”“bimasu”““nimasu”” ==> “nde”
 * “kimasu”  ==> “ite”
 * “gimasu” ==> “ide”
 * “shimasu” ==> “shite”
 */

map<string, string> rom = { { "chimasu", "tte" }, { "rimasu", "tte" }, {
		"mimasu", "nde" }, { "bimasu", "nde" }, { "nimasu", "nde" }, { "kimasu",
		"ite" }, { "gimasu", "ide" }, { "shimasu", "shite" } };

void solve() {
	int n, k, x, p0, s, kk;
	cin >> n >> k >> x >> p0;
	vector<int> time;
	for (int i = 0; i < n; i++) {
		cin >> s;
		time.push_back(ceil(x / double(s)));
	}
	vector<int> poss;
	poss.push_back(p0);
	for (int i = 0; i < k; i++) {
		cin >> kk;
		poss.push_back(kk);
	}
	for (int i = 0; i < k; i++) {
		cin >> kk;
		poss[i + 1] = kk - poss[i + 1];
	}
	sort(time.begin(), time.end());
	sort(poss.begin(), poss.end());

	int i = 0, j = 0;
	int ans = 0;
	while (i < n && j <= k) {
		if (time[i] <= poss[j]) {
			ans++, i++;
		} else {
			j++;
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
	t = 1;
//	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}


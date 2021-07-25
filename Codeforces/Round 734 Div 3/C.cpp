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

void solve() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	int ans = 0;
	for (int let = 0; let < 5; let++) {
		vector<int> freq(n, 0);
		for (int j = 0; j < n; j++) {
			for (auto l : v[j]) {
				if (l - 'a' == let) {
					freq[j]++;
				} else {
					freq[j]--;
				}
			}
		}
		sort(freq.rbegin(), freq.rend());
		int sum = 0, cur = 0;
		for (int j = 0; j < n; j++) {
			sum += freq[j];
			if (sum > 0) {
				cur = max(cur, j + 1);
			}
		}
		ans = max(ans, cur);
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


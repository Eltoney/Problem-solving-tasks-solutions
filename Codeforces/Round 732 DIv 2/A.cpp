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
	int n;
	cin >> n;
	vector<int> a(n), b(n), pos, neg;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < abs(a[i] - b[i]); k++) {
			if (a[i] > b[i]) {
				neg.push_back(i + 1);
			} else {
				pos.push_back(i + 1);
			}
		}
	}
	if (neg.size() != pos.size()) {
		cout << -1 << el;
	} else {
		cout << sz(neg) << "\n";
		for (int i = 0; i < sz(neg); i++) {
			cout << neg[i] << " " << pos[i] << el;
		}
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


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
	int n, tot = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		tot += v[i];
	}
	if (tot % n)
		cout << -1 << el;
	else {
		int need = 0, req = tot / n;
		vector<int> pp;
		for (int i = 0; i < n; i++) {
			if (v[i] < req) {
				need += req - v[i];
			}
			if (v[i] != req)
				pp.push_back(v[i]);
		}
		if (need == 0)
			cout << 0 << el;
		else {
			sort(pp.rbegin(), pp.rend());
			int cur = 0;
			for (int i = 0; i < sz(pp); i++) {
				cur += pp[i];
				int extra = cur - req * (i + 1);
				if (extra == need) {
					cout << i + 1 << el;
					break;
				}
			}
		}
	}
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


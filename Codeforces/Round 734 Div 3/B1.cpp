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
	string str;
	cin >> str;

	vector<int> freq(26, 0);
	for (int i = 0; i < sz(str); i++) {
		freq[str[i] - 'a']++;
	}
	int ans = 0, extra = 0;
	for (int i = 0; i < 26; i++) {
		if (freq[i] > 1) {
			ans += 2;
		} else if (freq[i] == 1) {
			extra++;
		}
	}
	cout << (ans + extra) / 2 << el;
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


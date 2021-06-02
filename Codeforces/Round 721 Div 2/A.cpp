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
//	freopen("entry_problem_input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
}

int naiveSolution(int n) {
	int cur = n;
	for (int i = n - 1; i >= 0; i--) {
		cur &= i;
		if (cur == 0)
			return i;
	}
	return 0;
}

void solve() {
	int n;
	cin >> n;
	int expAns;
	int val = 1;
	while (val * 2 <= n) {
		val *= 2;
	}
	expAns = val - 1;
	cout << expAns << el;
}

int main() {
	doublePrecision(0);
	fastIO;
	INPUT();

	int t;
//	t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}


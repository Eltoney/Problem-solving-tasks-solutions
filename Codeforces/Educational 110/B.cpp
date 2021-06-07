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

vector<int> v(N);

bool cmp(int a, int b) {
	return v[a] < v[b];
}

void solve() {
	int n, x;
	vector<int> even, odd, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x % 2)
			odd.push_back(x);
		else
			even.push_back(x);
	}
	for (int i = 0; i < (int)even.size(); i++) {
		v.push_back(even[i]);
	}
	for (int i = 0; i < (int)odd.size(); i++) {
		v.push_back(odd[i]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (__gcd(v[i], 2 * v[j]) > 1)
				ans++;
		}
	}
	cout << ans << el;
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


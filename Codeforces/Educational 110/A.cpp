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
	int x;
	vector<pair<int, int>> v;
	for (int i = 0; i < 4; i++) {
		cin >> x;
		v.push_back( { x, i });
	}
	sort(v.begin(), v.end());
	bool notFair = ((v[2].second > 1 && v[3].second > 1)
			|| (v[2].second < 2 && v[3].second < 2));
	cout << (notFair ? "NO\n" : "YES\n");
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


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

void solve() {
	int n;
	string str;
	cin >> n >> str;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == '0') {
			cnt++;
		}
	}
	if (cnt == 0)
		cout << "DRAW\n";
	else if (n % 2 == 0 || str[n / 2] == '1' || cnt == 1)
		cout << "BOB\n";
	else if (cnt == 2)
		cout << "DRAW\n";
	else
		cout << "ALICE\n";

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


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
	string word;
	cin >> word;
	if (word == "ikimasu") {
		cout << "itte\n";
		return;
	}
	string ed = "";
	int j = sz(word) - 1;
	while (j >= 0) {
		ed = word[j--] + ed;
		if (rom.find(ed) != rom.end())
			break;
	}
	for (int i = 0; i <= j; i++) {
		cout << word[i];
	}
	cout << rom[ed] << el;
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


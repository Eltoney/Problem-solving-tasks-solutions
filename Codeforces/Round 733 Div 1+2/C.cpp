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
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	ll me = 0, lyia = 0;
	ll count = n - n / 4;
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());

	for (int i = 0; i < count; i++) {
		me += a[i], lyia += b[i];
	}
	if (me > lyia) {
		cout << 0 << el;
	} else {
		ll st = 0, ed = 1e10, mid, ans = 1e10;

		while (st <= ed) {
			mid = (st + ed) / 2.0;
			ll newRounds = n + mid;
			ll newCount = newRounds - newRounds / 4;
			ll extra = newCount - count;

			ll newMe = mid * 100;
			ll extraMe = max(0LL, newCount - mid);

			for (ll i = 0; i < extraMe; i++) {
				if (i >= n) {
					break;
				}
				newMe += a[i];
			}

			ll newLyia = lyia;
			for (ll i = 0; i < extra; i++) {
				if (i + count >= n) {
					break;
				}
				newLyia += b[i + count];
			}
			if (newMe >= newLyia) {
				ans = min(ans, mid);
				ed = mid - 1;
			} else {
				st = mid + 1;
			}

		}

		cout << ans << el;
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


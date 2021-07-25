// Sha3ban_El-Bay
#include<bits/stdc++.h>
using namespace std;
//======================================================
#define Mset(v) sort(all(v));v.erase(unique(all(v)),v.end());
#define allg(v)   (v).rbegin(), (v).rend()
#define all(v) (v).begin(),(v).end()
#define PI 3.14159265358979323846
#define sz(v) (int)v.size()
#define ElBay INPUT();
#define ll long long
#define pb push_back
#define endl '\n'
#define S second
#define F first
const int inf = INT_MAX;
const int N = (int)2e5+5;
const ll oo = (ll)1e18+9;
const int mod = (int)1e9+7;
//======================================================
void INPUT()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("CFinput", "r", stdin);
	#endif
}
//======================================================
int main()
{
	ElBay
	int _;
	cin >> _;
	while(_--)
	{
		int k;
		cin >> k;
		int ans = 0;
		for(int i=1 ; i<=k ; i++)
			for(int j=i ; j<=k ; j++)
				if(i+j==k && i<7 && j<7) ans++;
		cout << ans << endl;
	}

	return 0;
}



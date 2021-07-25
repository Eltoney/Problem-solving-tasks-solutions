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
	ios_base::sync_with_stdio(false);cin.tie(0);
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
		ll r1,p1,s1,r2,p2,s2;
		cin >> r1 >> p1 >> s1 >> r2 >> p2 >> s2;
		ll ans = 0,x = 0;
		if(r1>0)
		{
			 // rock vs paper
			x=min(r1,p2);
			if(p2&&r1)ans+=x,p2-=x,r1-=x;
			// rock vs rock
			x=min(r1,r2);
			if(r2&&r1)r2-=x,r1-=x;
			// rock vs sic
			x=min(r1,s2);
			if(s2&&r1)ans-=x,r1-=x,s2-=x;
		 }
		 if(p1>0)
		 {
			// paper vs sic
			x=min(p1,s2);
			if(s2&&p1)ans+=x,s2-=x,p1-=x;
			// paper vs paper
			x=min(p1,p2);
			if(p2&&p1)p2-=x,p1-=x;
			// paper vs rock
			x=min(p1,r2);
			if(r2&&p1)ans-=x,r2-=x,p1-=x;
		}
		if(s1>0)
		{
			//sic vs rock
			x=min(s1,r2);
			if(r2&&s1)ans+=x,r2-=x,s1-=x;
			// sic vs sic
			x=min(s1,s2);
			if(s2&&s1)s2-=x,s1-=x;
			// sic vs paper
			x=min(s1,p2);
			if(p2&&s1)ans-=x,s1-=x,p2-=x;
		}
		cout << ans <<endl;
	}

	return 0;
}

 //r p s
// 1 2 3 mn
// 3 2 1 mx

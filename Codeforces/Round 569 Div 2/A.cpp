#include <bits/stdc++.h>


using namespace std;

#define Enter cout<<'\n'
#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
#define pb					push_back
#define MP					make_pair
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"

typedef long long         ll;
const int OO = (int)1e6;
const double EPS = (1e-7);
int dcmp(double x, double y) {	return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1;	}
typedef long double   	  ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;

void INPUT()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

int grids[101];

int main()
{
    grids[1]=1;
    grids[2]=5;
    grids[3]=13;
    for (int i =4;i<=101;i++)
    {
        grids[i]=grids[i-1]+i+2*(i-1)+(i-2);
    }
    int n;
    cin>>n;
    cout<<grids[n];


    return 0;
}


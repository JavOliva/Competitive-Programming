#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;

#define mp make_pair
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define all(name) name.begin(),name.end()
#define ff first
#define ss second

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll n; cin >> n;
	cout << ((3LL << (n + n - 6LL))*(3*(n - 3) + 8)) << "\n";
	return 0;
}
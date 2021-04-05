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

const ll mod = 1000;

ld f(ld val){ while(val > 1000.0L) val /= 10.0L; return val;}

ld fastPow(ld val, ll n){
	val = f(val);
	if (n == 1) return val;
	ld res = fastPow(val, n >> 1LL);
	res = f(res * res);
	return n % 2LL ? f(res * val) : res;
}

ll fastPow(ll val, ll n){
	val %= mod;
	if (n == 1) return val;
	ll res = fastPow(val, n >> 1LL);
	res = res * res;
	return (n % 2 ? res * val : res) % mod;
}

string format(ll val){
	vector<char> values;
	while(values.size() < 3){
		values.push_back((val % 10) + '0');
		val /= 10;
	}
	reverse(all(values));
	string s = "";
	rep(i, values.size()) s.push_back(values[i]);
	return s;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t --){
		ll n, k;
		cin >> n >> k;
		cout << (ll)fastPow((ld)n, k) << "..." << format(fastPow(n, k)) << "\n";;
	}
	return 0;
}
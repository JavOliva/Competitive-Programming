#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll mod = 1e9+7;

ll fastPow(ll a, ll n){
	if (n == 0) return 1;
	ll res = fastPow(a, n >> 1LL);
	res *= res;
	res %= mod;
	return (n % 2LL ? res * a : res) % mod;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;
	while(t --){
		ll n;
		cin >> n;
		if (n == 1LL) cout << "1\n";
		else if (n % 3LL == 1) cout << (fastPow(3LL, (n - 2LL) / 3LL) * 4LL) % mod << "\n";
		else cout << (fastPow(3LL, n / 3LL) * (n % 3LL ? n % 3LL : 1LL)) % mod << "\n";
	}
}
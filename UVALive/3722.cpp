#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod;

ll fastPow(ll a, ll n){
	if (n == 0) return 1;
	ll res = fastPow(a, n >> 1LL);
	res = (res * res % mod);
	return (n % 2 ? res * a : res) % mod;
}

ll fastSum(ll a, ll n){
	if (n == 0) return 1;
	ll res = fastSum(a, n >> 1LL);
	res = (res + (fastPow(a, (n >> 1LL) + 1LL) * res)) % mod;
	return ((n % 2 ? res : res - fastPow(a, n + 1)) % mod) + mod % mod;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll x, a, n;
	cin >> x >> a >> n >> mod;
	while(x){
		if (a % mod == 1LL)
			cout << (x - n % mod + mod % mod) << "\n";
		else
			cout << ((((fastPow(a, n) * x) % mod) - fastSum(a, n)) + 1LL + mod) % mod << "\n";
		cin >> x >> a >> n >> mod;
	}

	return 0;
}
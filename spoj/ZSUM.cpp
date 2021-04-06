#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e7+7;

ll fastPow(ll a, ll n){
	if (n == 0) return 1;
	ll res = fastPow(a, n >> 1LL);
	res = (res * res) % mod;
	return (n % 2 ? res * a : res) % mod;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll n, k;
	cin >> n >> k;
	while(n){
		cout << (fastPow(n, k) + fastPow(n, n) + 2LL*fastPow(n - 1, k) + 2LL * fastPow(n - 1, n - 1)) % mod << "\n";
		cin >> n >> k;
	}


	return 0;
}
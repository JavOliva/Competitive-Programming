#include<bits/stdc++.h>

using namespace std;

const int mod = 10;

int fastPow(int x, int n){
	x %= mod;
	if (n == 0) return 1;
	int res = fastPow(x, n >> 1);
	res *= res;
	return (n & 1 ? res * x : res) % mod;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t --){
		int a, b;
		cin >> a >> b;
		cout << fastPow(a, b) << "\n";
	}
	return 0;
}
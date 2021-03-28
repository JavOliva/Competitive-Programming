#include<bits/stdc++.h>

using namespace std;

int mod;
int fastPow(int a, int n){
	if (n == 0) return 1;
	int aux = fastPow(a, n / 2);
	aux = (aux * aux) % mod;
	if (n % 2) aux = (aux * a) % mod; 
	return aux;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t --){
		int x, y;
		cin >> x >> y >> mod;
		cout << fastPow(x % mod, y) << "\n";
	}
}
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll mod;
ll fastPow(ll a, int n){
	if (n == 0) return 1;
	ll aux = fastPow(a, n / 2);
	aux = (aux * aux) % mod;
	if (n % 2) aux = (aux * a) % mod; 
	return aux;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll B;
	int P;
	while(cin >> B >> P >> mod) cout << fastPow(B, P) << "\n";
}
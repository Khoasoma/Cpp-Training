#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2;i*i <= n;i++)
    	if (n % i == 0) return false;
    return true;
}

bool sumdigitprime(ll n){
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	return isPrime(sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);	
    ll a,b;
    cin >> a >> b;
    vector<ll> res;
    vector<int> digit = {2, 3 , 5 ,7};
    vector<ll> q;

    for(int d : digit) q.push_back(d);

    int head = 0;
	while (head < (int)q.size()){
		ll v = q[head++];
		if (v > b) continue;

		if (v >= a) {
			if (sumdigitprime(v) && isPrime(v)) {
				res.push_back(v);
			}
		}
		for (int d : digit){
			ll o = v * 10 + d;
			if (o <= b){
				q.push_back(o);
			}
		}

	}
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size();i++){
		cout << res[i] << (i == res.size() - 1 ? "" : " ");
	}

    return 0;
}
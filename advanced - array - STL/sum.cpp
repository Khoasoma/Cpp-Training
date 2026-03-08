#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n;
	cin >> n;
	// O(1)
	ll m = (n - 1) / 9;

	ll sum = 9 * ( m*(m+1) / 2 );
	cout << sum;
}
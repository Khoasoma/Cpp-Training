#include <bits/stdc++.h>
using namespace std;

int main (){
	int k; cin >> k;

	int m = sqrt(2*k);
	
	while (m*(m+1) <= 2*k) m++;

	while (m*(m-1) >= 2*k) m--;
	
	cout << m << "\n" << m*m;
}
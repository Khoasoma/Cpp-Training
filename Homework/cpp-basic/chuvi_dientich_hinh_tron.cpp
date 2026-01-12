#include <bits/stdc++.h>
using namespace std;

int main (){
	long long r;
	cin >> r;
	long double C = r * 2 * M_PI;
	long double S = r * r * M_PI;
	cout << fixed << setprecision(2) << C << " " << S;
	return 0;
 }
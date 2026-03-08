#include <bits/stdc++.h>
using namespace std;

int main(){
	string x, y, z;
	cin >> x >> y >> z;

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	sort(z.begin(), z.end());
	int max = 1;

	if (x == y && y == z){
		max = 3;
	}else if ( x == y || y == z || x == z){
		max = 2;
	}else{
		max = 1;
	}
	cout << max;
}
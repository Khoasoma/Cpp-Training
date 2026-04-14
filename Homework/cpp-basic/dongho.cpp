#include <bits/stdc++.h>

using namespace std;

int main(){
	int h,m; cin >> h >> m;
	int a = h/10;
	int b = h%10;
	int c = m/10;
	int d = m%10;

	bool b_valid = ( h % 10 <= 5);
	bool c_valid = !(h >= 20 && m >= 40);

	if(b_valid && c_valid){}

		else if (!b_valid){
			h = h + (10 - h % 10);
			m = 0;
		}
		else if (!c_valid) {
        h = (h + 1) % 24;
        m = 0;
    }

	//cout << a << " " << b << " " << c << " " << d << "\n";
	cout << h << " " << m << "\n";
	return 0;
}
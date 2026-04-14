	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		long long n;
		cin >> n;
		int ans = 0;
		freopen("PTSO.INP","r",stdin);
		freopen("PTSO.OUT","w",stdin);
		if (n % 2 != 0){
			cout << "-1";
			return 0;
		}
		long long half = n / 2;

		if (half % 2 != 0){
			cout << half << " " << half;	
		}
		else {
	        cout << half + 1 << " " << half - 1;
	    }
	}
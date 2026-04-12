#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	if(n % 6 == 0 || n % 8 == 0){
		cout << "YES";
	} else cout << "NO";
}
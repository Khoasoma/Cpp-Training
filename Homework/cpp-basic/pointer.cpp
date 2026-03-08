#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	int n ;cin >> n;
	while(n--){
		int x ; cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	return 0;
}
#include <bits/stdc++>
using namespace std;
// O(N)
int prime(int n){
	int cnt = 0;
	for(int i = 0,i < n,i++){
		if(n%i==0) cnt++;
	}
	if(cnt==2)
		return 1;
	else return 0;
}

int main(){
	int n; cin >> n;
	if(prime(n)) cout << "YES";
	else cout << "NO"
}
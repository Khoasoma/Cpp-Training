#include <bits/stdc++>
using namespace std;
// O(N)
//int prime(int n){
//	int cnt = 0;
//	for(int i = 0,i < n,i++){
//		if(n%i==0) cnt++;
//	}
//	if(cnt==2)
//		return 1;
//	else return 0;
//}


//O(n/2) = O(log N)
int prime(int n){
	for(int i = 2;i <= sqrt(n);i++){
		if (n%i ==0 )
			return 0;
	}
	return n>1;
}

int main(){
	int n; cin >> n;
	if(prime(n)) cout << "YES";
	else cout << "NO"
}
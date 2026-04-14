#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin >> s;
	int sum = 1; int ans = 1;
	for(int i = 1; i < (int)s.size() ;i++){
	if(s[i] == s[i- 1]) sum++;
	else sum = 1;
	ans = max(ans , sum);
	}
	cout << ans;
}
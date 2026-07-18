#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	string s; getline(cin, s);
  	int ans = 0;
  	for(char c : s){
  		if(c == ' ')
  			ans++;
  	}
  	cout << ans;
    return 0;
}
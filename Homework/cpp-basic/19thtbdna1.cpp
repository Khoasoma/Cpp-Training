#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    int cnt = 0;
    for(char x : s){
    	if(x % 2 != 0) cnt ++;
    }
    cout << cnt;
    return 0;
}
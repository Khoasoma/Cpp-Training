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
    for(int x : s){
    	if(x == '9') cnt++;
    }
    cout << cnt;
    return 0;
}
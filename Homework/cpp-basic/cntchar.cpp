#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    std::vector<char> freq(26,0);
    for(char c : s){
    	freq[c - 'a']++;
    }
    int cnt = 0;
    for(int i = 0;i < 26;i++){
    	if(freq[i] == 1) cnt++;
    }
    cout << cnt;
    return 0;
}
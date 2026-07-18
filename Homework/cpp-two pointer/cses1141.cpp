#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    std::vector<int> song(n);
    for(int i = 0 ; i < n;i++) cin >> song[i];
    int left = 0, cd = 0;
	unordered_set<int> songdb;
    for(int right = 0; right < n;right++){
    	while(songdb.count(song[right])){
    	songdb.erase(song[left]);
    	left++;
    }	
    songdb.insert(song[right]);
    cd = max(cd, right - left + 1);
}
	cout << cd;
    return 0;
}
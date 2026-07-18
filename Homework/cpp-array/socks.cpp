#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    std::vector<int> color_cnt(101,0);

    for(int i = 0;i < n;i++){
    	int color;
    	cin >> color;
    	color_cnt[color]++;
    }
    int total_pairs = 0;
    for(int i = 1;i <= 100;i++){
    	total_pairs += color_cnt[i] / 2;
    }
    cout << total_pairs;
    return 0;
}
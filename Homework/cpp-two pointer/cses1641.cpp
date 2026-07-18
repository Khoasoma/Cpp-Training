#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long x; cin >> x;
    std::vector<pair<long long , int>> a(n);
   	for(int i = 0;i < n; i++){ cin >> a[i].first;
   		a[i].second = i + 1;
}
	sort(a.begin(), a.end());
	for(int i = 0;i < n - 2;i++){
		long long tar = x - a[i].first;
		int l = i + 1;
		int r = n - 1;
		while(l < r){
			long long current_sum = a[l].first + a[r].first;
			if(current_sum == tar){
				cout << a[i].second << " " << a[l].second << " " << a[r].second;
				return 0;
			}else if (current_sum < tar) {
				l++;
		}else {
			r--;
		}
}
}
	cout << "IMPOSSIBLE";
    return 0;
}
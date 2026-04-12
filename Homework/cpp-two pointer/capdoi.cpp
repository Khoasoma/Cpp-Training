#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    auto left = 0;
	auto right = n - 1;
	int result = 0;
	int cnt = 0;
	sort(a.begin(), a.end());
	while(left < right){
		long long current_sum = (long long)a[left] + a[right];
		if(current_sum == x){
			if (a[left] == a[right]){
				long long num = right - left + 1;
				result += num * (num - 1) / 2;
				break;
			} else { 
				int cntl = 1, cntr = 1;
				while( left  + 1 < right && a[left] == a[left + 1]){
					left++;
					cntl++;
				}
				while( right - 1 > left && a[right] == a[right - 1 ]){
					right--;
					cntr++;
				}
				result += (long long)cntl * cntr;
				left++;right--;
			}
		}
		else if (current_sum < x) left++;
		else right--;
	}
	cout << result;
    return 0;
}
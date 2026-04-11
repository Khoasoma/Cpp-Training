#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	int n; cin >> n;
   	long long sum = 0;
   	vector<long long> a(n);
   	for(long long &x : a ) { 
   		cin >> x;
   		sum += x;
   	}
   	if(sum % 2 != 0){
   		cout << "0";
   		return 0;
   	}

   	long long target = sum / 2;
   	long long cur = 0;
   	long long cnt = 0;

   	for(int i = 0;i < n - 1;i++){
   		cur += a[i];
   		if(cur == target)
   			cnt++;
   	}
   	cout << cnt;
    return 0;
}
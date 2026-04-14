#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
   	vector<int> a(n);
   	vector<int> b(m);
   	vector<long long> c;
   	c.reserve(n + m);

   	for(int &x : a) cin >> x;
   	for(int &x : b) cin >> x;

   	int i = 0;
   	for(int j = 0;j < m;j++){
   		while( i < n && a[i] < b[j]){
   			i++;
   		}
   		c.push_back(i);
   	}
   	//cout << i << " ";
   	for(long long &x : c) cout << x << " ";
    return 0;
}
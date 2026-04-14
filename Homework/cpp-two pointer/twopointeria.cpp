#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m; cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);
    vector<long long> sum;
    sum.reserve(n + m);
    for(long long &x : a) cin >> x;
   	for(long long &x : b) cin >> x;

   	int i = 0 , j = 0;

   while(i < n && j < m){
   		if(a[i] < b[j]) {
   			sum.push_back(a[i]);
   			i++;
   		}else {
   			sum.push_back(b[j]);
   			j++;
   		}
   }
   while ( i < n ){
   		sum.push_back(a[i]);
   		i++;
   }
   while( j < m) {
   		sum.push_back(b[j]);
   		j++;
   }
 	for(long long &x : sum) cout << x << " ";
    return 0;
}
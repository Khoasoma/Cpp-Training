#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n; 
    long long total = (long long)n*(n+1)/2;
    long long sum = 0;
    for (int i = 0;i< n - 1;i++){
    	int x;
    	cin >> x;
    	sum += x;
    }
    cout << total - sum;
    return 0;
}
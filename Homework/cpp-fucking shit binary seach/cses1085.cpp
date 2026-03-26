#include <bits/stdc++.h>

using namespace std;

#define ll long long
bool check(long long X, int k, int n, const vector<int>& a){
	ll curr_sum = 0;
	int doan = 1;
	for ( int i = 0; i < n;i++){
		if (curr_sum + a[i] < = X){
			curr_sum + a[i];
		}
		else {
			doan ++;
			curr_sum = a[i];
		}
	}
	return doan <=k;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    ll low = 0; ll high = 0;

    for(int i = 0;i < n;i++){
    	cin >> a[i];
    	if(a[i] > low ) low = a[i];
    	high += a[i];
    }
    long long ans = high;
    while (low <= high){
    	ll mid = low + hi
    }
    return 0;
}
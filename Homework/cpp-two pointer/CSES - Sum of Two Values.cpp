#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<pair<long long,long long>> a(n);
   	for(int i = 0;i < n;i++){
   		cin >> a[i].first;
   		a[i].second = i + 1;
   	}
   	sort(a.begin(), a.end());
   	int l = 0;int r = n - 1;

   	while(l < r){
   	int sum = a[l].first + a[r].first;
   	if(sum == x){
   		cout << a[l].second << " " << a[r].second;
   		return 0;
   	}   
   	if (sum < x){
   		l++;
   	}
   	if (sum > x){
   		r--;
   	}
   }
    cout << "IMPOSSIBLE";
    return 0;
}
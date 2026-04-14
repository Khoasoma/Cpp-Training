#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x ; cin >> n >> x;
    vector<int> p(n);
    for(int &a : p) cin >> a;
    int boat = 0;
	int i = 0;
	int j = n - 1;
	sort(p.begin(),p.end());
	while(i <= j){
		if(p[i] + p[j] <= x){
			i++;
			j--;
		}else{
			j--;
		}
		boat++;

	}
	cout << boat;
    return 0;
}
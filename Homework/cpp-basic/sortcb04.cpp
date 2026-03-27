#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m;
    cin >> n >> m;

    vector<int> negative;
    vector<int> all_cards(n);
    for (int &x : all_cards) {
    	cin >> x;
    	if(x < 0) negative.push_back(x);
    }

    sort(negative.begin(),  negative.end());

    long long total_dame = 0;
    int count = 0;

    for (int x : negative){
    	if(count >= m) break;
    	total_dame += abs(x);
    	count++;
    }
    cout << total_dame;

    return 0;
}
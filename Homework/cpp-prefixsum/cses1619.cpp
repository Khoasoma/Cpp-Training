#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    int a , b;
    vector<pair<int,int>> events;

    for(int i = 0;i < n;i++){
    	cin >> a >> b;
    	events.push_back({a , 1});
    	events.push_back({b , -1});
    }

    sort(events.begin(),events.end());
    int max_customer = 0;
    int current_customer = 0;

    for(auto const &event : events){
    	current_customer += event.second;
    	max_customer = max(max_customer , current_customer);
    }
    cout << max_customer;

    return 0;
}
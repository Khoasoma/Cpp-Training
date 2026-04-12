#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string s;
    int streak = 0;
    int cur = 0;
    while(n--){
    	cin >> s;
    	if(cur >= 2) streak++;
    	if(s == "ONLINE") cur++;
    	if(s == "IDLE" || s == "OFFLINE") cur = 0;
    }
    cout << streak;
    return 0;
}
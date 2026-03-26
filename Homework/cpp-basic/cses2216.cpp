#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    vector<int> pos(n + 1);
    for (int i = 0; i <= n; i++){
    	int x; cin >> x; pos[x] = i;
    }

    int round = 1;
    for(int i = 1; i < n;i++)
    	if(pos[i + 1] < pos[i]) round++;

    cout << round; 

    return 0;
}
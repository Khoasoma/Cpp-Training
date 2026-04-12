#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("FREQ.INP","r",stdin);
    freopen("FREQ.OUT","w",stdout);

    int n;
    cin >> n;

    map<int , int> freq;

    for(int i = 0;i < n; i++){
    	int x;
    	cin >> x;
    	freq[x]++;

    }

    for(auto const& [val,count] : freq){
    	cout << val << " " << count << "\n";
    }
    return 0;
}
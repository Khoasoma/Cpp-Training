#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

struct tuong{
	int phy;
	int mag;
};
bool comparetuong(const tuong& a, const tuong& b){
	if(a.phy != b.phy){
		return a.phy > b.phy;
	}
	return a.mag > b.mag;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m; cin >> n >> m;
    std::vector<tuong> tuongs(n);
    for(int i = 0;i < n;i++){
    	cin >> tuongs[i].phy >> tuongs[i].mag;
    }
    sort(tuongs.begin(), tuongs.end(),comparetuong );
    cout << tuongs[m - 1].phy << " " << tuongs[m - 1].mag;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

struct Interval{
	long long a , b;
	bool operator<(const Interval& other)	 const{
		return a < other.a;
	}
};

int n , m;
std::vector<Interval> Intervals;


// ham check n con bo voi khoang cach toi thieu d la 0
bool check(long long d){
	long long cows_placed = 0;
	long long last_pos = 0;
	bool first_cow = true;

	for(const auto& iv : Intervals){
		long long start = iv.a;
		if(!first_cow) { 
			start = max (start, last_pos + d);

		}
		// neu bat dau van nam trong doan hien tai
		if (start <= iv.b) {
			long long num_cows = (iv.b - start) / d + 1;
			cows_placed += num_cows;
			// update vi tri
			last_pos = start + (num_cows - 1) * d;
			first_cow = false;
			
		}
		if (cows_placed >= n) return true;
	}

	return false;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("COWVID.INP", "r", stdin);
    freopen("COWVID.OUT", "w", stdout);

    cin >> n >> m;
    Intervals.resize(m);
    for(int i = 0; i < m;i++){
    	cin >> Intervals[i].a >> Intervals[i].b;
    }

    sort(Intervals.begin(), Intervals.end());
    long long L = 1;
    long long R = 2e18; // r = 2 * 10^18
    long long ans = -1;

    while (L <= R){
    	long long mid = L + (R - L) / 2;

    	if (check(mid)){
    		ans = mid;
    		L = mid + 1;
    	} else {
    		R = mid - 1;
    	}
    }
    cout << ans << "\n";
    return 0;
}

// https://oj.chuyentinbrvt.online/problem/algi_mockts10_2025_de5_p3
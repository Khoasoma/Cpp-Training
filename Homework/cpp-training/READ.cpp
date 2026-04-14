	#include <bits/stdc++.h>


	using namespace std;

	int main() {
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);

	    freopen("READ.inp","r",stdin);
	    freopen("READ.out","w",stdout);

	    int n, m;
	    long long k;
	    
	    cin >> n >> m >> k;

	    vector<long long> a(n), b(m);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    for (int i = 0; i < m; i++) cin >> b[i];

	    long long curr_time = 0;
	    int count_a = 0;

	    while (count_a < n && curr_time + a[count_a] <= k) {
	        curr_time += a[count_a];
	        count_a++;
	    }

	    int max_books = count_a;

	    for (int count_b = 1; count_b <= m; count_b++) {
	        curr_time += b[count_b - 1]; 

	      
	        while (curr_time > k && count_a > 0) {
	            count_a--; 
	            curr_time -= a[count_a]; 
	        }

	       
	        if (curr_time > k) {
	            break; 
	        }

	        
	        max_books = max(max_books, count_a + count_b);
	    }

	    cout << max_books << "\n";

	    return 0;
	}
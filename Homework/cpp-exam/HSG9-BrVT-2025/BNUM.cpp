#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("BNUM.INP","r",stdin);
    freopen("BNUM.OUT","w",stdout);
    long long n;
    cin >> n;
    bool is_fib[82] = {false};
    is_fib[1] = is_fib[2] = is_fib[3] = is_fib[5] = is_fib[8] = is_fib[13]
    = is_fib[21] = is_fib[34] = is_fib[55] = true;

    long long so_luong = 0;

    for(int i = 1;i * i <=n ; i++){
    	long long sochinhphuong = i * i;
    	int tong_chu_so = 0;
    	long long temp = sochinhphuong;
    	while(temp > 0){
    		tong_chu_so += temp % 10;
    		temp /= 10;
    	}
    	if(is_fib[tong_chu_so] == true){
    		so_luong++;
    	}
    }
    cout << so_luong;

    return 0;
}
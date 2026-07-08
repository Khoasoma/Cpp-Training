#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >>t;
    long long a , b ,c; 
    while (t--){
    	cin >> a >> b >> c;
    	if(a+b>c && b + c > a && c + a > b){
    		if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a){ cout << "NO" << "\n";
    }		else cout << "YES"<< "\n";
    }else cout << "NO" << "\n";
}
    return 0;
}
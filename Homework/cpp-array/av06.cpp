#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}


bool duong = false;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    std::vector<int> a(n);
    int loc1 = -1, loc2 = -1;
    for(int i = 0; i < n;i++) cin >> a[i];
   	for(int i = 0; i < n;i++){
   		if(a[i] < 0){
   			loc1 = i;
   			duong = true;
   			break;
   		}
   	}
   	for(int i = n-1; i >= 0;i--){
   		if(a[i] < 0){
   			loc2 = i;
   			break;
   		}
   	}  	
   	if(duong == false){
 	cout << -1 << " " << -1;
   	}else cout << loc1+1 << " " << loc2+1;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
void solve(vector<int>& a) {
    int n = a.size();
    for(int i = 0 ; i < n - 1; i++){
        bool swapped = false; // Cờ hiệu
        for (int j = 0; j < n - i - 1; ++j) {
            if(a[j] > a[j + 1]){
                swap(a[j] , a[j + 1]);
                cnt++;
                swapped = true;
            }
        }
        if(!swapped) break; // Thoát sớm nếu mảng đã ổn
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("SAPXEP.INP","r",stdin);
    freopen("SAPXEP.OUT","w",stdout);
    int n ; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    solve(a);
	cout << cnt;
    return 0;
}
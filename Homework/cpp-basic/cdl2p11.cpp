#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float w ; float	h; cin >> w >> h;
    float bmi = w/(h*h);
    if (bmi < 18.5){ cout << "Thieu can";
    }else if (bmi <= 22.9){ cout << "Binh thuong";
    }else if (bmi > 22.9)cout << "Thua can";
    return 0;
}
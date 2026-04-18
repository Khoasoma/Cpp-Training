#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a , b , k , x ,y; cin >> a >> b >> k >> x >> y;
    long long keo_cam = a*k;
    long long keo_chanh = b*k;
    keo_cam = keo_cam - x;
    keo_chanh = keo_chanh - y;
    long long ty = (keo_cam + 1) / 2;
    long long teo = (keo_chanh + 1) / 2;

    cout << ty << " " << teo;

    return 0;
}
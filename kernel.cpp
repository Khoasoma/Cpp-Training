#include <bits/stdc++.h>

using namespace std;

#define ll long long
<<<<<<< HEAD
ll gcd(ll x,ll y){
	while(y){
		x%= y;
		swap(x,y);
	}
	return x;
}
ll lcm(ll x, ll y){
	if (x == 0 || y == 0) return 0;
	return (x / gcd(x,y)) * y

// LỖI 1 ĐÃ SỬA: Thay dấu chấm phẩy (;) thành dấu phẩy (,)
ll gcd(ll x, ll y){
    while(y){
        x %= y;
        swap(x,y);
    }
    return x;
}

ll lcm(ll x, ll y){
    if (x == 0 || y == 0) return 0;
    return (x / gcd(x,y)) * y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b;
    cin >> n >> a >> b;

    ll cyl1 = a + 1;
    ll cyl2 = b + 1
    // LỖI 2 ĐÃ SỬA: Thêm dấu chấm phẩy (;) ở cuối dòng
    ll cyl2 = b + 1; 

    ll off1 = n / cyl1;
    ll off2 = n / cyl2;
    ll offboth = n / lcm(cyl1, cyl2);

    ll res = off1 + off2 - offboth;

    cout << res;

    return 0;
}
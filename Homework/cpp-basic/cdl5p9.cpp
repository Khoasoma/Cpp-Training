#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Your core logic here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1; getline(cin , s1);
    string s2; getline(cin , s2);

    string a = s1 + " " + s2;
    stringstream ss(a);

    int cnt = 0;
    string temp;
    while(ss >> temp){
    	cnt++;
    }
    cout << cnt;
    return 0;
}
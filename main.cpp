#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,  x; cin >> n >> x;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    if(binary_search(a.begin(),a.end(), x)) cout << "True";
    else cout << "false";
    return 0;
}
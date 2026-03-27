#include <bits/stdc++.h>

using namespace std;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<char> digits;

    for(char c : s){
    	if (isdigit(c)){
    		digits.push_back(c);
    	}
    }

    sort(digits.begin(),digits.end());

    int digitsIdx = 0;
    for(int i = 0;i < s.length();i++){
    	if(isdigit(s[i])){
    		cout << digits[digitsIdx++];
    	} else {
    		cout << s[i];
    	}
    }
    return 0;
}
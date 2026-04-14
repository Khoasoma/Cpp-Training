#include <bits/stdc++.h>

using namespace std;

int main(){
	int tung = 0 , hoanh = 0;
	freopen("COOR.inp","r",stdin);
	freopen("COOR.out","w",stdout);
	string s; cin >> s;

	for(int i = 0;i < s.size();i ++){
		if(s[i] == 'E') hoanh++;
		if(s[i] == 'S') tung--;
		if(s[i] == 'W') hoanh--;
		if(s[i] == 'N') tung++;
	}
	cout << hoanh << " " << tung;
}
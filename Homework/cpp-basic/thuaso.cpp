#include <bits/stdc++.h>
using namespace std;

void ts(int n){
	for(int i = 2;i <= sqrt(n);i++){ // duyet tu 2 (la thua so nho nhat co the chia duoc va no khac 1) den can bac 2 cua n
		while (n%i==0){ // chay vong lap khi n chia het cho i
			cout << i << " ";
			n/=i; // lay n chia tiep cho i
		}
	}
	if (n!=1) cout << n << " ";
}


void ts2(int n){
	for(int i = 2;i <= sqrt(n);i++){
		if(n%i==0) cout << i << " ";
		while(n%i==0) n/=i;
	}
	if (n!=1) cout << n << " ";
}

void ts3(int n){
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) {
			int cnt = 0;
		
		while(n%i==0){
			cnt++;
			n/=i;
		}cout << i << cnt << " ";
		if(n!=1) cout << n << cnt;
	}
}
}

void ts4(int n){
	for(int i = 2;i<=sqrt(n);i++){
		while(n%i==0){
			cout << i;
			cout << "x";
			n/=i;
		}
	}
	if(n!=1) cout << n;
}
int main(){
	int n; cin >> n;
	ts4(n);
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
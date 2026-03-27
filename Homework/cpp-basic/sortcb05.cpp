#include <bits/stdc++.h>

using namespace std;
struct tuong{
  		int physical_dame;
  		int chemistry_dame;
  	};

bool soTuong(const tuong &a,const tuong &b){
	if(a.physical_dame != b.physical_dame){
		return a.physical_dame > b.physical_dame;
	}
	return a.chemistry_dame > b.chemistry_dame;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a , b;
    cin >> a >> b;
    vector<tuong> danh_sach(a);
    for(int i = 0;i < a;i++){
    	cin >> danh_sach[i].physical_dame >> danh_sach[i].chemistry_dame;
    }
    sort (danh_sach.begin(),danh_sach.end(), soTuong);

    cout << danh_sach[b-1].physical_dame << " " << danh_sach[b-1].chemistry_dame << "\n";

    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string K;
    freopen("TBC.INP","r",stdin);
    freopen("TBC.OUT","w",stdout);
    if (cin >> K) { 
        long long sum = 0;
        int count = K.length();

        for (char digit : K) {
            sum += digit - '0'; 
        }
        double average = (double)sum / count;

        cout << fixed << setprecision(2) << average << "\n";
    }
    return 0;
}
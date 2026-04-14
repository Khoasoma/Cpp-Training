#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX_LIMIT = 1000000;
vector<long long> primes;
bool is_prime[MAX_LIMIT + 1];

void sieve() {
    for (int i = 2; i <= MAX_LIMIT; i++) {
        is_prime[i] = true;
    }
    
    for (long long p = 2; p * p <= MAX_LIMIT; p++) {
        if (is_prime[p]) {
            for (long long i = p * p; i <= MAX_LIMIT; i += p) {
                is_prime[i] = false;
            }
        }
    }
    
    for (long long p = 2; p <= MAX_LIMIT; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
}

void solve() {
    long long n;
    cin >> n;

    for (long long i : primes) {
        if (i * i * i > n) break;

        if (n % i == 0) {
            if (n % (i * i) == 0) {
                long long p = i;
                long long q = n / (p * p);
                cout << p << " " << q << "\n";
            } else {
                // i chính là q
                long long q = i;
                long long temp = n / q;
                
                long long p = sqrt(temp);
                while (p * p < temp) p++;
                while (p * p > temp) p--;

                cout << p << " " << q << "\n";
            }
            return; 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve(); 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
#include <iostream>
#define ll long long int
#define MOD 1000000007
using namespace std;
ll Power(ll i, ll k) {
    ll ans = 1;
    while(k) {
        if(k & 1) ans = (ans % MOD * i % MOD) % MOD;
        k /= 2;
        i = (i%MOD * i%MOD) % MOD;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll k;
        cin >> k;
        ll res = Power(2, (k-1)) * 10;
        cout << res% MOD << "\n";
    }
    return 0;
}

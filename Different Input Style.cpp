#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll m) {
    vector<ll> a;
    set<ll> se;
    for(int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
 
        if(x > m) continue;
        if(x % 7 == 6 || x % 7 == 0) continue;
        se.insert(x);
    }
 
    ll q = m / 7;
    ll mod = m % 7;
    ll ini_ans = se.size() + 2 * q;
 
    if(mod == 6) {
        ini_ans += 1;
    }
 
    cout << m - ini_ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) {
            break;
        }

        solve(n, m);
    }

    return 0;
}

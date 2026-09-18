// The end of the input is indicated by a line consisting of two zeros.
// (This means a complete Test Case set ends with 0 0)
// See the last part after the code

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


/*
Suppose the judge gives your program:

4 8
1 2 3 4

2 10
15 3

3 14
6 7 13

0 0

That's 3 test cases in one execution:

Program starts
    ↓
Test case 1
    ↓
Test case 2
    ↓
Test case 3
    ↓
0 0
    ↓
Program finishes


If another judge input happens to contain 20 test cases, 
that's a completely fresh execution of your program:

Program starts again from main()
    ↓
Test case 1
Test case 2
...
Test case 20
    ↓
0 0
    ↓
Program finishes
*/

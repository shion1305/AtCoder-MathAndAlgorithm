#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl


int main() {
    ll n, m;
    cin >> n >> m;
    ll values[n];
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }
    ll sum = 0;
    ll sumV = 0;
    for (int i = 0; i < m; ++i) {
        sumV += values[i] * (i + 1);
        sum += values[i];
    }
    ll max = sumV;
    for (int i = m; i < n; ++i) {
        sumV -= sum;
        sumV += m * values[i];
        sum += values[i];
        sum -= values[i - m];
        if (max < sumV)max = sumV;
    }
    cout << max << endl;
}

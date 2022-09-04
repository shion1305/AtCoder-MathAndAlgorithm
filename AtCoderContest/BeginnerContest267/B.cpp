#include <bits/stdc++.h>

using namespace std;

int condition1(int in[7]) {
    int counter = 0;
    for (int i = 0; i < 7; ++i) {
        if (in[i] > 0 && ++counter == 2) {
            return 1;
        }
    }
    return 0;
}

int condition2(int in[7]) {
    int pos = -1;
    while (++pos < 7) {
        if (in[pos] > 0) {
            while (++pos < 7) {
                if (in[pos] == 0) {
                    while (++pos < 7) if (in[pos] > 0) return 1;
                }
            }
        }
    }
    return 0;
}


int solve(string s) {
    int result[7] = {0,};
    if (s[0] == '1') return 0;
    int map[] = {3, 2, 4, 1, 3, 5, 0, 2, 4, 6};
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '1')result[map[i]]++;
    }
    return condition1(result) and condition2(result);
}


int main() {
    string s;
    cin >> s;
    if (solve(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
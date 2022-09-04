#include <bits/stdc++.h>

using namespace std;

int solve(string s);

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
}

int solve(string s) {
    if (s == "Monday") {
        return 5;
    }
    if (s == "Tuesday") {
        return 4;
    }
    if (s == "Wednesday") {
        return 3;
    }
    if (s == "Thursday") {
        return 2;

    }
    return 1;
}

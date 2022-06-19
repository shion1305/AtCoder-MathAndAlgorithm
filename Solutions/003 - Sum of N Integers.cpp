#include <iostream>

using namespace std;

int main() {
    int sum = 0, n, tmp;
    cin >> n;
    while (n-- > 0) {
        cin >> tmp;
        sum += tmp;
    }
    std::cout << sum << std::endl;
    return 0;
}

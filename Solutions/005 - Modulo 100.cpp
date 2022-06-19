#include <iostream>

using namespace std;

int main() {
    int result = 0, n, tmp;
    cin >> n;
    while (n-- > 0) {
        cin >> tmp;
        result += tmp;
    }
    std::cout << result % 100 << std::endl;
    return 0;
}

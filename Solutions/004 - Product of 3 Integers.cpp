#include <iostream>

using namespace std;

int main() {
    int result = 1, n = 3, tmp;
    while (n-- > 0) {
        cin >> tmp;
        result *= tmp;
    }
    std::cout << result << std::endl;
    return 0;
}

#include <iostream>

int smallestMult(int n) {
    int prod = 1;
    for (int i = 2; i < n; i++) {
        if (prod % i != 0) {
            int x = i;
            while (x * i < n)
                x *= i;
            prod *= x;
        }
    }
    return prod;
}
int main() {
    std::cout << smallestMult(20) << '\n';
}

#include <iostream>
#include <cmath>

int main() {
    int n;
    double S = 0.0;
    double schet= 0.0;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        schet += 7 * i; 
        S += sin(schet); 
    }
    std::cout << S;
}
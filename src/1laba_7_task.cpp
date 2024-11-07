#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int sum2 = 0; 
    int proizvkratnost = 1;
    int nachalo22 = 0; 

    for (int i = 0; i < n; ++i) {
        int number;
        std::cin >> number;
        if (number % 10 == 2) {
            sum2 += number;
        }
        if (number % 10 == 0 && number % 3 == 0) {
            proizvkratnost *= number;
        }
        if (number >= 22 && number < 230) { 
            if (number / 10 == 22) {
                nachalo22++;
            }
        }
    }
    std::cout << sum2 << "\n";
    std::cout << proizvkratnost << "\n";
    std::cout << nachalo22 << "\n";
}
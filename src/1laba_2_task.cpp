#include <iostream>
#include <cmath>

int main(){
    double x;
    std::cin >> x;
    if (x >= 5){
        std::cout << cos(3.14 * x - (3.14/2)) << "\n";
    } else if (x <= 0){
        std::cout << 2/ pow((x*x +1),0.5) << "\n";
    } else {
        std::cout << (10*2/3) << "\n";
    }
}
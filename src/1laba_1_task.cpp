#include <iostream>

int main(){
    double x;
    std::cin >> x;
    double x2 = x * x;        
    double x4 = x2 * x2;      
    double x5 = x4 * x;       
    double x8 = x4 * x4;      
    double x14 = x8 * x5;     
    double y = x14 - x5 + x2 - 2; 
    std::cout << y;
}
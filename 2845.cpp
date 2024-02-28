#include <iostream>
#include <cmath>

int main() {
    int a,b,c,d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    std::cout << trunc((a+b+c+d)/60) << std::endl;
    std::cout << trunc((a+b+c+d)%60) << std::endl;

    return 0;
}
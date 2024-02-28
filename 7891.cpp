#include <iostream>

int main1() {
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        int b = 0;
        int c = 0;
        std::cin >> b >> c;
        std::cout << b+c << std::endl;
    }
    return 0;
}
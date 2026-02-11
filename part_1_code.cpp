#include <iostream>

void processData(int val, int* ptr) {
    val += 10;
    *ptr += 10;
}

int main() {
    int alpha = 20;
    int beta = 20;

    std::cout << "Before function call:" << std::endl;
    std::cout << "alpha = " << alpha << std::endl;
    std::cout << "beta = " << beta << std::endl;

    processData(alpha, &beta);

    std::cout << "\nAfter function call:" << std::endl;
    std::cout << "alpha = " << alpha << std::endl;
    std::cout << "beta = " << beta << std::endl;

    return 0;
}
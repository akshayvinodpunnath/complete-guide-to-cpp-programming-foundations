#include <iostream>

constexpr int calculateMaxSpeed(int baseSpeed, int boost) {
    return baseSpeed + boost * 5;
}

int main() {
    constexpr const int maxSpeed = calculateMaxSpeed(60, 8);
    std::cout << "Current Max Speed: " << maxSpeed << std::endl;
    int baseSpeed, boost;
    std::cout << "Enter new Base Speed: ";
    std::cin >> baseSpeed;
    std::cout << "Enter new Boost value: ";
    std::cin >> boost;
    const int newMaxSpeed = calculateMaxSpeed(baseSpeed, boost);
    std::cout << "New Max Speed: " << newMaxSpeed << std::endl << std::endl;
    return 0;
}
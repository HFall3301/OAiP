#include <iostream>
#include <limits>

int main() {
    bool isNotWork;
    double x, y;

    std::cout << "This program determines, whether a point (x,y) belongs to the closed set D.\n";

    isNotWork = true;
    std::cout << "Enter the x coordinate\n";
    do {
        std::cin >> x;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Wrong input! Enter a number:\n";
        }
        else {
            isNotWork = false;
        }
    } while(isNotWork);
    std::cout << "Enter the y coordinate\n";
    do {
        std::cin >> y;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Wrong input! Enter a number:\n";
        }
        else {
            isNotWork = false;
        }
    } while(isNotWork);
    if ((x + y < 1.0 || x + y == 1.0) && (2.0 * x - y < 1.0 || 2.0 * x - y == 1.0) && (y > 0.0 || y == 0.0))
        std::cout << "This point belongs to the closed set D." << std::endl;
    else
        std::cout << "This point doesn't belong to the closed set D." << std::endl;
    return 0;
}

#include <iostream>
#include <limits>

int main() {
    bool isNotWork;
    int n, m, answer;

    answer = 1;

    std::cout << "This program calculates permutation from n to m.\n";

    isNotWork = true;
    std::cout << "Enter the n\n";
    do {
        std::cin >> n;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Wrong input! Enter a number:\n";
        }
        else {
            isNotWork = false;
        }
    } while(isNotWork);

    isNotWork = true;
    std::cout << "Enter the m\n";
    do {
        std::cin >> m;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Wrong input! Enter a number:\n";
        }
        else {
            isNotWork = false;
        }
    } while(isNotWork);

    for (int i = n; i > n - m; i--) {
        answer *= i;
    }
    std::cout << answer << std::endl;
    return 0;
}

#include <iostream>
#include <limits>

int main() {
    bool isNotWork;
    int num_1, num_2, den_1, den_2;

    std::cout << "This program adds two rational fractions and simplifies the result if it's necessary\n";

    isNotWork = true;
    std::cout << "Enter a numerator of the first fraction\n";
    do {
        std::cin >> num_1;
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
    std::cout << "Enter a denominator of the first fraction\n";
    do {
        std::cin >> den_1;
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
    std::cout << "Enter a numerator of the second fraction\n";
    do {
        std::cin >> num_2;
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
    std::cout << "Enter a denominator of the second fraction\n";
    do {
        std::cin >> den_2;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Wrong input! Enter a number:\n";
        }
        else {
            isNotWork = false;
        }
    } while(isNotWork);

    if (den_1 != den_2) {                   //привожу к общему знаменателю, если он разный и складываю числители
        num_1 = num_1 * den_2 + num_2 * den_1;
        den_1 *= den_2;
    }
    else
        num_1 += num_2;
    int a = num_1, b = den_1;
    while (a != 0 && b != 0) {                  //нахожу НОД числителя и знаменателя суммы
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    if (b > a)
        std::cout << num_1 / b << " / " << den_1 / b << std::endl;
    else
        std::cout << num_1 / a << " / " << den_1 / a << std::endl;
    return 0;
}

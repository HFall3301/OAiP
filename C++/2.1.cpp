#include <iostream>

const int INPUT_ACCURACY = 12;
int main() {
    bool isNotWork;
    short int n, m;
    unsigned int answer;

    n = 0;
    m = 0;
    answer = 1;

    std::cout << "This program calculates permutation from n to m\n";

    isNotWork = true;
    std::cout << "Please enter n from 1 to " << INPUT_ACCURACY << "\n";
    do {
        std::cin >> n;
        if (std::cin.fail()){       //Ввели не число
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Please enter a number again\n";
        }
        else if (std::cin.peek() != '\n') {     //Ввели число и мусор
            while (std::cin.get() != '\n');
            std::cout << "Please enter ONLY a number again\n";
        }
        else if (n > INPUT_ACCURACY || n < 0) {       //Ввели число вне диапазона
            std::cout << "Please enter a number again from 1 to " << INPUT_ACCURACY << "\n";
        }
        else
            isNotWork = false;
    } while (isNotWork);
    isNotWork = true;
    std::cout << "Please enter m from 1 to " << INPUT_ACCURACY << "\n";
    do {
        std::cin >> m;
        if (std::cin.fail()){       //Ввели не число
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Please enter a number again\n";
        }
        else if (std::cin.peek() != '\n') {     //Ввели число и мусор
            while (std::cin.get() != '\n');
            std::cout << "Please enter ONLY a number again\n";
        }
        else if (m > INPUT_ACCURACY || m < 0) {       //Ввели число вне диапазона
            std::cout << "Please enter a number again from 1 to " << INPUT_ACCURACY << "\n";
        }
        else
            if (m > n)
                std::cout << "m can't be greater than n. Please try again\n";
            else
                isNotWork = false;
    } while (isNotWork);

    for (short int i = n; i > n - m; i--) {
        answer *= i;
    }
    std::cout << "The permutation = " << answer;
    return 0;
}

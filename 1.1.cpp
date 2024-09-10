#include <iostream>

const int input_accuracy = 32767;
int main() {
    bool isNotWork;
    double x, y;

    std::cout << "This program determines, whether a point (x,y) belongs to the closed set D.\n";

    isNotWork = true;
    std::cout << "Please enter the x coordinate within +/-" << input_accuracy << "\n";
    do {
        std::cin >> x;
        if (std::cin.fail()){       //Ввели не число
            std::cin.clear();
            std::cin.ignore(input_accuracy, '\n');
            std::cout << "Please enter a number again\n";
        }
        else if (std::cin.peek() != '\n') {     //Ввели число и мусор
            std::cin.clear();
            std::cin.ignore(input_accuracy, '\n');
            std::cout << "Please enter ONLY a number again\n";
        }
        else if (x > input_accuracy || x < -input_accuracy) {       //Ввели число вне диапазона
            std::cin.clear();
            std::cin.ignore(input_accuracy, '\n');
            std::cout << "Please enter a number again within +/-" << input_accuracy << "\n";
        }
        else
            isNotWork = false;
    } while (isNotWork);

    isNotWork = true;
    std::cout << "Please enter the y coordinate within +/-" << input_accuracy << "\n";
    do {
        std::cin >> y;
        if (std::cin.fail()){       //Ввели не число
            std::cin.clear();
            std::cin.ignore(input_accuracy, '\n');
            std::cout << "Please enter a number again\n";
        }
        else if (std::cin.peek() != '\n') {     //Ввели число и мусор
            std::cin.clear();
            std::cin.ignore(input_accuracy, '\n');
            std::cout << "Please enter ONLY a number again\n";
        }
        else if (y > input_accuracy || y < -input_accuracy) {       //Ввели число вне диапазона
            std::cin.clear();
            std::cin.ignore(input_accuracy, '\n');
            std::cout << "Please enter a number again within +/-" << input_accuracy << "\n";
        }
        else
            isNotWork = false;
    } while (isNotWork);

    if ((x + y < 1.0 || int(x + y) == 1) && (2.0 * x - y < 1.0 || int(2.0 * x - y) == 1) && (y > 0.0 || int(y) == 0))
        std::cout << "This point belongs to the closed set D." << std::endl;
    else
        std::cout << "This point doesn't belong to the closed set D." << std::endl;
    return 0;
}

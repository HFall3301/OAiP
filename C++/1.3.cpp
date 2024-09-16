#include <iostream>

const int INPUT_ACCURACY = 20;
const float INACCUARCY = 0.0000001;
int main() {
    bool isNotWork;
    double x, y;

    x = 0.0;
    y = 0.0;
    
    std::cout << "This program determines, whether a point (x,y) belongs to the closed set D\n";

    isNotWork = true;
    std::cout << "Please enter the x coordinate within +/- " << INPUT_ACCURACY << "\n";
    do {
        std::cin >> x;
        if (std::cin.fail()){       //Ввели не число
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Please enter a number again\n";
        }
        else if (std::cin.peek() != '\n') {     //Ввели число и мусор
            while (std::cin.get() != '\n');
            std::cout << "Please enter ONLY a number again\n";
        }
        else if (x > INPUT_ACCURACY || x < -INPUT_ACCURACY) {       //Ввели число вне диапазона
            std::cout << "Please enter a number again within +/- " << INPUT_ACCURACY << "\n";
        }
        else
            isNotWork = false;
    } while (isNotWork);

    isNotWork = true;
    std::cout << "Please enter the y coordinate within +/- " << INPUT_ACCURACY << "\n";
    do {
        std::cin >> y;
        if (std::cin.fail()){       //Ввели не число
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Please enter a number again\n";
        }
        else if (std::cin.peek() != '\n') {     //Ввели число и мусор
            while (std::cin.get() != '\n');
            std::cout << "Please enter ONLY a number again\n";
        }
        else if (y > INPUT_ACCURACY || y < -INPUT_ACCURACY) {       //Ввели число вне диапазона
            std::cout << "Please enter a number again within +/- " << INPUT_ACCURACY << "\n";
        }
        else
            isNotWork = false;
    } while (isNotWork);

    if ((x + y < 1.0 + INACCUARCY) && (2.0 * x - y < 1.0 + INACCUARCY) && (y + INACCUARCY > 0.0))
        std::cout << "This point belongs to the closed set D.\n";
    else
        std::cout << "This point doesn't belong to the closed set D.\n";
    return 0;
}

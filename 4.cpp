#include <iostream>
#include <limits>

int main() {
    bool isNotWork;
    int n;
    double temp_1, temp_2;

    std::cout << "This program \"smoothes\" an array.\n";

    isNotWork = true;
    std::cout << "Enter the length of the array.\n";
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

    double A[n];
    std::cout << "Enter array's elements\n";
    for (int i = 0; i < n; i++) {
        isNotWork = true;
        do {
            std::cin >> A[i];
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << "Wrong input! Enter a number:\n";
            }
            else {
                isNotWork = false;
            }
        } while(isNotWork);
    }

    temp_1 = A[0]; temp_2 = A[1];
    for (int i = 1; i < n - 1; i++) {
        A[i] = (temp_1 + A[i] + A[i + 1]) / 3;
        temp_1 = temp_2; temp_2 = A[i + 1];
    }
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    return 0;
}

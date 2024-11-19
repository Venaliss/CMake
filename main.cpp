#include <iostream>
#include <cstdlib>
#include "area.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Необходимо: " << argv[0] << " <number a> <number b>" << std::endl;
        return 1;
    }

    double a = std::atof(argv[1]);
    double b = std::atof(argv[2]);

    if (a >= b) {
        std::cerr << "Ошибка: a больше или равно b." << std::endl;
        return 1;
    }

    double area = calculate_area(a, b);
    std::cout << "Площадь под графиком с " << a << " до " << b << " равна: " << area << std::endl;
}
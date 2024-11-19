#include "area.h"
#include <cmath>

double calculate_area(double a, double b) {
    // Прямоугольный метод для вычисления площади под графиком f(x) = x^2
    double area = 0.0;
    int n = 1000; // Число разбиений
    double delta_x = (b - a) / n;

    for (int i = 0; i < n; ++i) {
        double x = a + i * delta_x;
        area += (x * x) * delta_x; // Функция f(x) = x^2
    }
    return area;
}
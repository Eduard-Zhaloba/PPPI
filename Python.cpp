#include <cmath>

const double PI = 3.14159265358979323846;

double get_sin(double x) {
    double radians = x * PI / 180.0;
    return sin(radians);
}

double get_cos(double x) {
    double radians = x * PI / 180.0;
    return cos(radians);
}
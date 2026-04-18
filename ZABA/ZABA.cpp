#include <iostream>
#include <cmath>

double get_tan(double x) {
    double radians = x * 3.14159265358979323846 / 180.0;
    return tan(radians);
}

double get_ctg(double x) {
    double radians = x * 3.14159265358979323846 / 180.0;
    return 1.0 / tan(radians);
}/////
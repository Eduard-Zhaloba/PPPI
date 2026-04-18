#include <cmath>

const double PI = 3.14159265358979323846;

double get_sin(double x) {
    if (x==180 or x==360){
        return 0;
	}
    else{
        double radians = x * PI / 180.0;
        return sin(radians);
    }
}

double get_cos(double x) {
    if (x==90 or x==270){
		return 0;
    }
    else{
        double radians = x * PI / 180.0;
        return cos(radians);
    }
}
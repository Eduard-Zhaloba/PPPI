#include <iostream>
#include <cmath>

double get_tan(double x) {
    if (x == 90 || x == 270) {
        std::cerr << "Error: tan is undefined at " << x << " degrees." << std::endl;
        return NAN; 
	}
    else {
       
        double radians = x * 3.14159265358979323846 / 180.0;
        return tan(radians);
		 
    }
    
}

double get_ctg(double x) {
    if (x == 0 or x == 180 or x == 360) {
        std::cerr << "Error: ctg is undefined at " << x << " degrees." << std::endl;
        return NAN;
    }
    else {
       
        double radians = x * 3.14159265358979323846 / 180.0;
        return 1.0 / tan(radians);
		 
    }
    
}/////
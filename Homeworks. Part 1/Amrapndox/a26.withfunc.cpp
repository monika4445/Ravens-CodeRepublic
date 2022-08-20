#include <iostream>
#include <cmath>

void quadrEquation(float a, float b, float c);

int main() {

    float a, b, c;
    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c;
    quadrEquation(a, b, c);
    return 0;
}

void quadrEquation(float a, float b, float c){
     float x1, x2, discriminant, realPart, imaginaryPart;
    
     discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different." << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    
    else if (discriminant == 0) {
        std::cout << "Roots are real and same." << std::endl;
        x1 = -b /(2 * a);
        std::cout << "x1 = x2 =" << x1 << std::endl;
    }

    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different."  << std::endl;
        std::cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << std::endl;
        std::cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << std::endl;
    }

    
}

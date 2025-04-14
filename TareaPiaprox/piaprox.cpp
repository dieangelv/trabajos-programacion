#include <iostream>
#include <cmath>
#include <iomanip>

double pi_aprox(int n) {
    double sumatoria = 0.0;
    for(int k = 0; k <= n; ++k) {
        double term = (1.0/pow(16, k))*(4.0/(8*k+1) - 2.0/(8*k+4) - 1.0/(8*k+5) - 1.0/(8*k+6));
        sumatoria = sumatoria + term;
    }
    return sumatoria;
    
}

int main() {
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    
    for(int n = 1; n <= 20; ++n) {
        double pi_aproximado = pi_aprox(n);
        double error_relativo = std::abs(1 - pi_aproximado/M_PI);
        
        std::cout<< "n = " << n << "\n";
        std::cout<< "pi aprox = " << pi_aproximado << "\n";
        std::cout<< "error relativo = " << error_relativo << "\n";
        
    }
    return 0;
}
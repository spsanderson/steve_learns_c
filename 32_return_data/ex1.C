#include <stdio.h>

// Function prototype
float celsiusToFahrenheit(float celsius);

int main() {
    float tempC = 25.0;
    float tempF = celsiusToFahrenheit(tempC);
    
    printf("%.1f degrees Celsius is equal to %.1f degrees Fahrenheit\n", tempC, tempF);
    return 0;
}

// Function definition
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++) {
        int random_num = (rand() % 100) + 1;
        double sqrt_result = sqrt(random_num);
        double degrees = sqrt_result * (180.0 / M_PI);
        
        printf("Number: %d, Square Root: %.2f, Degrees: %.2f\n",
               random_num, sqrt_result, degrees);
    }
    return 0;
}

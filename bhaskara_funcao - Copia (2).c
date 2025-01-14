
#include <stdio.h>
#include <math.h>
int bhaskara(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        return 0; 
    } else if (delta == 0) {
        *x1 = *x2 = -b / (2 * a);
        return 1; 
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2; 
    }
}

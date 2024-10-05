/* 
 * File: 02.variables.c 
 * Reference: C Programming Minimalist Guide | Part 2 : Variables
 * Available at: [https://medium.com/gitconnected/c-programming-minimalist-guide-part-2-variables-ad88b483c86b]
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 19, numOfSisters = 3;
    char t_shirtSize = 'M';
    float heightCm = 175.5f;
    float heightCm_implicitCast = 1234567.1234567; // value to demonstrate loss of precision
    float heightCm_explicitCast = (float)1234567.1234567; // explicit casting
    double hbarUnits = 7000.0155678912345;
    bool hasSiblings = true;

    printf("height with implicit cast: %.7f\n", heightCm_implicitCast); // output after implicit cast
    printf("height with explicit cast: %.7f\n", heightCm_explicitCast); // output after explicit cast

    printf("Xiu, %i y.o., %d sisters, t-shirt %c, %.1f cm, %.4lf hbar, has siblings? (0 ~ false, 1 ~ true): %i\n",
           age, numOfSisters, t_shirtSize, heightCm, hbarUnits, hasSiblings);
    
    return 0;
}

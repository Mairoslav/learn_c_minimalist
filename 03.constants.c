/* 
 * File: 03.constants.c 
 * Reference: C Programming Minimalist Guide | Part 3: Constants and Precision
 * Available at: [https://levelup.gitconnected.com/c-programming-minimalist-guide-part-3-constants-and-precision-b1cc67eb260e]
 */

#include <stdio.h> 

int main() { 
    const double timeFromMoonToEarthSec = 1.2822; // Measured time in seconds for light to travel from the Moon to Earth
    const double speedOfLightKmS = 299792.458;    // Speed of light in kilometers per second

    double distanceDouble = speedOfLightKmS * timeFromMoonToEarthSec;
    printf("distance from Moon to Earth is %.15f km with double precision\n", distanceDouble);

    float distanceFloat = (float)speedOfLightKmS * (float)timeFromMoonToEarthSec;
    printf("distance from Moon to Earth is %.15f km with float precision\n", distanceFloat);

    double difference = distanceDouble - distanceFloat;
    printf("\t\t\t\t   %.15f km >> according to the float Moon was %.2f meters closer to Earth at the time of measurement\n", difference, difference * 1000 * (-1));

    return 0;
}

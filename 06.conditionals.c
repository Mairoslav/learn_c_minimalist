/* 
 * File: 06.conditionals.c 
 * Reference: C Programming Minimalist Guide | Part 6: Conditionals
 * Available at: [https://levelup.gitconnected.com/c-programming-minimalist-guide-part-6-conditionals-661a939c5e98]
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int temperature = -11; // You can change this value to test different conditions
    bool isWarm;

    // 1. Conditional statement: if
    if (temperature < 19) {
        printf("1: wake me up in summer\n");
    }

    // 2. Conditional alternative: if-else
    if (temperature > 19) {
        printf("2: it's warm outside!\n");
    } else {
        printf("2: it's not so warm outside\n");
    }

    // 3a. Compact shorthand of conditional alternative: ternary operator
    temperature > 19 ? printf("3a: yeah it's warm\n") : printf("3a: yeah it's not so warm\n");

    // 3b. Ternary operator returning a value
    isWarm = temperature > 19 ? true : false;
    printf("3b: return one if it's warm or zero if it's not: %i\n", isWarm);

    // 4. More conditional alternatives: else if
    if (temperature > 29) {
        printf("4: it's really hot!\n");
    } else if (temperature > 19) {
        printf("4: it's comfortably warm\n");
    } else if (temperature > 9) {
        printf("4: it's a bit chilly\n");
    } else if (temperature > -1) {
        printf("4: it's chilly\n");
    } else {
        printf("4: it's cold\n");
    }

    // 5. Switch statement
    switch (temperature) {
        case 30 ... 45: // C11 feature for range syntax
            printf("5: let's swim!\n");
            break;
        case 20 ... 29:
            printf("5: let's bike!\n");
            break;
        case 10 ... 19:
            printf("5: let's run!\n");
            break;
        case 0 ... 9:
            printf("5: let's chill!\n");
            break;
        default:
            if (temperature > 45) { // Handling upper bound of infinity
                printf("5: let's move to another place with friendly temperature!\n");
            } else {
                printf("5: let's do skialp!\n");
            }
            break;
    }

    return 0;
}

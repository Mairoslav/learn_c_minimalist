/* 
 * File: 07.00_loops.c 
 * Reference: C Programming Minimalist Guide | Part 7: Loops Intro
 * Available at: [https://levelup.gitconnected.com/c-programming-minimalist-guide-part-7-loops-intro-c12c6e51e9bf]
 */

#include <stdio.h>

int main() {
    int i;

    // 1. while loop
    i = 3;
    while (i >= 1) {
        printf("%d² = %d ... 1. while\n", i, i * i);
        i--;
    }

    // 2a. do-while loop with reset
    i = 3; 
    do {
        printf("%d² = %d ... 2a. do_while\n", i, i * i);
        i--;
    } while (i >= 1);

    // 2b. do-while loop without reset
    do {
        printf("%d² = %d ... 2b. do_while\n", i, i * i);
        i--;
    } while (i >= 1);

    // 3. for loop
    for (i = 3; i >= 1; i--) {
        printf("%d² = %d ... 3. for\n", i, i * i);
    }

    return 0;
}

/* 
 * File: 07.03_forLoop.c
 * Reference: C Programming Minimalist Guide | Part 7.3: For Loop
 * Available at: [https://medium.com/@mmairo/bf4dae836bdb?source=friends_link&sk=f278ec2c9f25cf6d55bad98b536f8cdc]
 */

#include <stdio.h>

int main() {

    for (int i = 97; i <= 122; i++) {
        if (i == 104) { 
            continue; // Skip the letter 'h' entirely, do not print anything
        } else if (i < 122) {
            printf("%c, ", (char)i); // Print the current letter followed by a comma and space
        } else {
            printf("%c\n", (char)i); // Print the last letter followed by a newline
        }
    }
    return 0; // Indicate successful program termination
}


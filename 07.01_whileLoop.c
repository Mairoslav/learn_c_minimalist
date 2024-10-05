/* 
 * File: 07.01_whileLoop.c
 * Reference: C Programming Minimalist Guide | Part 7.1: While Loop
 * Available at: [https://medium.com/@mmairo/92fc9d659401?source=friends_link&sk=fbb4288bc47f8f398732e46ef5e17a14]
 */

#include <stdio.h>

int main() {
    int password = 0;
    int tries = 3;

    printf("Insert your password:\n");

    while (password != 1111 && tries > 0) {
        scanf("%i", &password);

        if (password == 1111) {
            printf("Welcome to your account\n");
            break;
        }

        tries--;

        if (tries == 0) {
            printf("No more tries available. Your account is blocked; get in touch with our support team\n");
        } else {
            printf("Incorrect password, try again\n");
        }
    }

    return 0;
}



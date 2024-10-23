/* 
 * File: 07.02_doWhileLoop.c
 * Reference: C Programming Minimalist Guide | Part 7.2: Do-While Loop
 * Available at: [https://medium.com/@mmairo/07f44933d02c?source=friends_link&sk=c80f0a5663106dea26974071f3bb381a]
 */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // For sleep function

int main() {
    bool wifiConnected = false;
    int connectionAttempts = 0;

    do {
        printf("Connecting...\n");
        sleep(1);
        
        connectionAttempts++;
        
        if (connectionAttempts >= 3) {
            wifiConnected = true;
            printf("Connected 📶 \n");
        } else {
            printf("Something went wrong, not able to connect\n");
        }
    } while (!wifiConnected);

    return 0;
} 
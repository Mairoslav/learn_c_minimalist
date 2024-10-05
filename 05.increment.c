/* 
 * File: 05.increment.c 
 * Reference: C Programming Minimalist Guide | Part 5: pre vs post increment
 * Available at: [https://levelup.gitconnected.com/c-programming-minimalist-guide-part-5-pre-vs-post-increment-d565d16dafc4]
 */

#include <stdio.h>

int main() {
    int a = 0; 
    int b = 0;

    int pre_increment = ++a;
    int post_increment = b++;

    printf("Pre-increment: counting starts from %d, still a becomes %d\n", pre_increment, a);
    printf("Post-increment: counting starts from %d, still b becomes %d\n", post_increment, b);

    return 0;
}


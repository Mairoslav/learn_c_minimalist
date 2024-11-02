/*
 * File: 10.strings.c
 * Reference: Strings
 * Available at: [https://medium.com/@mmairo/2a0e50ae3d6a?source=friends_link&sk=7a6c8d76357a385f299a07419c07e192]
 */

#include <stdio.h>
#include <string.h> // includes standard string functions

int main() {

    char hiddenText[20];
    char greetLa[20] = {'h', 'i', ' ', 'l', 'a', '\0'}; 
    char greetLo[] = "hi lo"; 

    greetLa[0] = '8'; 
    greetLa[1] = '5';

    greetLo[0] = '9';
    greetLo[1] = '1';

    strcat(greetLa, greetLo); 
    printf("%s\n", greetLa); 

    int stringLength = strlen(greetLa);

    for (int i = 0; i < stringLength; i++) {
        if (greetLa[i] != ' ') {
            greetLa[i] = '*'; 
        }
    }

    strcpy(hiddenText, greetLa); 
    printf("%s\n", hiddenText); 

    return 0;
}


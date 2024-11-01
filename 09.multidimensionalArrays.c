/*
 * File: 09.multidimensionalArrays.c
 * Reference: Multidimensional Arrays
 * Available at: [https://medium.com/@mmairo/a8c55eeb10b5?source=friends_link&sk=19c61256dc2ba69980301bee0933728b]
 */

#include <stdio.h>

int main() {

    char chessboard[][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, // white pieces
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, // white pawns
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // empty fields ... 
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, // black pawns
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}  // black pieces
    };

    chessboard[6][3] = ' ';
    chessboard[4][3] = 'p';

    int rows = sizeof(chessboard) / sizeof(chessboard[0]); 
    int columns = sizeof(chessboard[0]) / sizeof(chessboard[0][0]);

    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            char field = chessboard[i][j]; 
            if (j == 7) { 
                printf("|%c|\n", field);
            } else {
                printf("|%c", field); 
            }
         }
    }

    return 0;

}


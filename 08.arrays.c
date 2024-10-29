/* 
 * File: 08.arrays.c
 * Reference: Arrays
 * Available at: [https://medium.com/@mmairo/5f164e3803e2?source=friends_link&sk=dd5645139aa5f2993a4e0fd9fe255495]
 */

#include <stdio.h>

// int everestMasl = 8848; 
// int k2Masl = 8611; 
// int kangchenjunga = 8586; 

int main() {

  int peaksMasl_unInit[3]; 

  peaksMasl_unInit[0] = 8848; 
  peaksMasl_unInit[1] = 8611; 
  peaksMasl_unInit[2] = 8586; 

  int peaksMasl[] = {8848, 8611, 8586}; 

  peaksMasl[1] += 77; 

  printf("the new height of k2 after earthquake is %i meters above the sea level (masl)\n", peaksMasl[1]);

  int peaksMaslElements = sizeof(peaksMasl) / sizeof(peaksMasl[0]);

  for (int i = 0; i < peaksMaslElements; i++) {
    peaksMasl[i] -= 100;
  }

  for (int i = 0; i < 3; i++) {
    if (i == 0) {
      printf("%i masl is the new height of everest after the sea level rise\n", peaksMasl[i]); 
    } else if (i == 1) {
      printf("%i masl is the new height of k2 after the sea level rise\n", peaksMasl[i]); 
    } else {
      printf("%i masl is the new height of kangchenjunga after the sea level rise\n", peaksMasl[i]); 
    }
  }

  return 0;

}

#include <stdio.h>
#include <stdlib.h> // required for malloc and free
#include <string.h> // for memset, memcpy, etc.

#define ARRAY_ACCESS_VIA_POINT_OR_INDX 1 // 1 for pointer arithmetic, 2 for array indexing

int main() {
    // declare and initialize variables
    double jo = 1.1;
    double *ptrToJo = NULL;

    ptrToJo = &jo; // assign memory address of jo to ptrToJo
    printf("\n%p is address of jo assigned to ptrToJo\n", ptrToJo);

    if (ptrToJo != NULL) { // dereference operator to modify jo
        *ptrToJo = 999.9;
    } else {
        printf("pointer is NULL!\n");
    }
    printf("\nwith 'dereference operator' we changed 'jo' from 1.1 to %.1f\n", jo);

    // pointer arithmetic and arrays
    double jos[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *ptrToJos = NULL;

    #if ARRAY_ACCESS_VIA_POINT_OR_INDX == 1
        ptrToJos = jos;
    #else
        ptrToJos = &jos[0];
    #endif

    printf("\naddress %p - base one - stores value %.1f - first one in array jos\n", ptrToJos, *ptrToJos);

    // pointer arithmetic examples
    ptrToJos++;
    printf("address %p stores value %.1f - next one in array jos\n", ptrToJos, *ptrToJos);

    ptrToJos--;
    printf("address %p - again base one - stores value %.1f - first one in array jos\n", ptrToJos, *ptrToJos);

    ptrToJos += 4;
    printf("address %p stores value %.1f - last one in array jos\n", ptrToJos, *ptrToJos);

    ptrToJos -= 4;
    printf("address %p - once again base one - stores value %.1f - first one in array jos\n\n", ptrToJos, *ptrToJos);

    // Comparing pointers and navigating arrays
    int josElements = sizeof(jos) / sizeof(jos[0]);
    const double *ptrToJosEnd = jos + josElements - 1;

    #if ARRAY_ACCESS_VIA_POINT_OR_INDX == 1
        // Navigate using pointer arithmetic
        while (ptrToJos <= ptrToJosEnd) {
           printf("value: %.1f at address: %p\n", *ptrToJos, ptrToJos);
          ptrToJos++;
        }
    #else
    // Navigate using array indexing
        for (int i = 0; i < josElements; i++) {
            printf("value: %.1f at address: %p\n", jos[i], &jos[i]);
        }
    #endif

    printf("\n");

    // dynamic Memory Allocation
    char choice;

    printf("do you need to allocate additional dynamic memory? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("dynamic memory allocation selected.\n");

        int *ptrToIntegers = malloc(5 * sizeof(int));
        if (ptrToIntegers == NULL) {
            printf("initial memory allocation failed.\n");
            return 1;
        }

        // memset or expand with realloc
        printf("do you want to initialize the memory with memset or dynamically grow it with realloc? (m/r): ");
        scanf(" %c", &choice);

        if (choice == 'm' || choice == 'M') {
            memset(ptrToIntegers, 0, 5 * sizeof(int));
            printf("memory initialized using memset.\n");

            for (int i = 0; i < 5; i++) {
                ptrToIntegers[i] = i + 1;
                printf("integer %d: %d\n", i + 1, ptrToIntegers[i]);
            }

            free(ptrToIntegers);
            printf("memory cleaned up with free().\n");

        } else if (choice == 'r' || choice == 'R') {
            int currentSize = 1;
            *ptrToIntegers = 42;

            int input;
            do {
                int *temp = realloc(ptrToIntegers, (currentSize + 1) * sizeof(int));
                if (temp == NULL) {
                    printf("memory allocation failed.\n");
                    free(ptrToIntegers);
                    return 1;
                }
                ptrToIntegers = temp;

                printf("Enter integer %d: ", currentSize + 1);
                if (scanf("%d", &input) == 1) {
                    *(ptrToIntegers + currentSize) = input;
                    currentSize++;
                } else {
                    printf("invalid input, stopping...\n");
                    break;
                }

                printf("do you want to add another integer? (y/n): ");
                scanf(" %c", &choice);
            } while (choice == 'y' || choice == 'Y');

            printf("\nupdated array:\n");
            for (int i = 0; i < currentSize; i++) {
                printf("integer %d: %d\n", i + 1, *(ptrToIntegers + i));
            }

            free(ptrToIntegers);
            printf("memory cleaned up with free().\n");
        } else {
            printf("invalid option, no further action taken.\n");
        }
    } else {
        printf("no dynamic memory allocation applied.\n");
    }

    return 0;
}

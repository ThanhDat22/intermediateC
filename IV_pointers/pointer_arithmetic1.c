// arithmetic1.c

#include <stdio.h>
#include <stdlib.h>

int main (int argc ,char * * argv) {

    // Creates three arrays  
    int    arr1[] = {7, 2, 5, 3, 1, 6, -8, 16, 4};
    char   arr2[] = {'m', 'q', 'k', 'z', '%', '>'};
    double arr3[] = {3.14, -2.718, 6.626, 0.529};
  
    // Calculates the numbers of elements in each array
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(char);
    int len3 = sizeof(arr3) / sizeof(double);

    // Display the length of the arrays
    printf("lengths = %d, %d, %d\n", len1, len2, len3);

    // Assigns the first element in each array to the pointers.
    int    * iptr = arr1;
    char   * cptr = arr2;
    double * dptr = arr3;

    // Display the values stored at the corresponding addresses
    printf("values = %d, %c, %f\n", * iptr, * cptr, * dptr);
    iptr ++;
    cptr ++;
    dptr ++;
    printf("values = %d, %c, %f\n", * iptr, * cptr, * dptr);
    iptr ++;
    cptr ++;
    dptr ++;
    printf("values = %d, %c, %f\n", * iptr, * cptr, * dptr);
    iptr ++;
    cptr ++;
    dptr ++;
    printf("values = %d, %c, %f\n", * iptr, * cptr, * dptr);

    return EXIT_SUCCESS;
}

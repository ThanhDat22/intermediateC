#ifndef ARE_DISTINCT_H
#define ARE_DISTINCT_H

/** Checks the dublicate value in the array
 * @param arr: the array
 * @param len: the number elements in the array
 * return: {true} if there is no dublicate value; {false} otherwise
*/
int are_distinct(int* arr, int len) {
    int i;
    int j;
    
    // Traverse through the array
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            // Check whether two elements have the same value
            if (arr[i] == arr[j]) { return 0; }           
        }
    }
    // There is no duplicate value
    return 1;
}

#endif //!AREDISTINCT_H
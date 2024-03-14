#ifndef STRING_LENGTH_H
#define STRING_LENGTH_H

int string_length(char *str) {
    int length = 0;
    while ((*str) != '\0') {
        length++;
        str++;
    }
    return length;
} 

#endif //!STRING_LENGTH_H
#include <stdio.h>
#include <string.h>

char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


void print_calendar(int year) {
    int month_length[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int is_leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    
    if (is_leap)
        month_length[1]++;

    printf("\n%d\n", year);

    for (int i = 0; i < 12; i++) {
        printf("%s %d\n", months[i], month_length[i]);
        
        int days = 1;
        for (int j = 1; j <= month_length[i]; j++) {
            printf("%d ", days++);
            
            if (days % 7 == 1)
                printf("\n");
        }
        
        printf("\n");
    }
}


int main() {
    print_calendar(2024);

    return 0;
}
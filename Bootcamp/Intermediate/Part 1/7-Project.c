#include <stdio.h>
#include <stdlib.h>

#define DAYS_COUNT 7

int week_temps[DAYS_COUNT];

void input_week_temps(void) {
    printf("Enter temperatures for each day:\n");
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    
    for (int i = 0; i < DAYS_COUNT; i++) {
        printf("Temperature for %s: ", days[i]);
        if (scanf("%d", &week_temps[i]) != 1) {
            printf("Invalid input! Please enter a number.\n");
            exit(1);
        }
    }
}

float Average(void) {
    float sum = 0;
    for (int i = 0; i < DAYS_COUNT; i++) {
        sum += week_temps[i];
    }
    return sum / DAYS_COUNT;
}

int maxTemp() {
    int max = week_temps[0];
    for (int i = 1; i < DAYS_COUNT; i++) {
        if (max < week_temps[i]) {
            max = week_temps[i];
        }
    }
    return max;
}

int minTemp() {
    int min = week_temps[0];
    for (int i = 1; i < DAYS_COUNT; i++) {
        if (min > week_temps[i]) {
            min = week_temps[i];
        }
    }
    return min;
}

int main() {
    input_week_temps();
    printf("Average = %.2f\n", Average());
    printf("Max = %d\n", maxTemp());
    printf("Min = %d\n", minTemp());
    return 0;
}
#include <stdio.h>

void copy_arry(int a0, int a1, int a2, int a3, int a4, int *arryCopy) {
    int arry[5] = {a0, a1, a2, a3, a4}; 
    
    for (int i = 0; i < 5; i++) {
        arryCopy[i] = arry[i]; 
    }
}

int main() {
    int A0, A1, A2, A3, A4;
    int arryCopy[5];

    printf("Please enter A0: "); scanf("%d", &A0);
    printf("Please enter A1: "); scanf("%d", &A1);
    printf("Please enter A2: "); scanf("%d", &A2);
    printf("Please enter A3: "); scanf("%d", &A3);
    printf("Please enter A4: "); scanf("%d", &A4);

    copy_arry(A0, A1, A2, A3, A4, arryCopy);

    for (int i = 0; i < 5; i++) {
        printf("arryCopy[%d] = %d\n", i, arryCopy[i]);
    }

    return 0;
}
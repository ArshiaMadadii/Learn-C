#include <stdio.h>

int is_sorted(int a0, int a1, int a2, int a3, int a4) {
    int arry[5] = {a0, a1, a2, a3, a4};
    for (int i = 0; i < 4; i++) {
        if (arry[i+1] < arry[i]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int is_strictly_sorted(int a0, int a1, int a2, int a3, int a4) {
    int arry[5] = {a0, a1, a2, a3, a4};
    for (int i = 0; i < 4; i++) {
        if (arry[i+1] <= arry[i]) {
            return 0; // Not strictly sorted
        }
    }
    return 1; // Strictly sorted
}

void final_check(int a0, int a1, int a2, int a3, int a4) {
    if (is_strictly_sorted(a0, a1, a2, a3, a4)) {
        printf("Strictly sorted\n");
    }
    else if (is_sorted(a0, a1, a2, a3, a4)) {
        printf("Sorted but not strictly\n");
    }
    else {
        printf("Not sorted\n");
    }
}

int main() {
    int A0, A1, A2, A3, A4;

    printf("Please enter A0: "); scanf("%d", &A0);
    printf("Please enter A1: "); scanf("%d", &A1);
    printf("Please enter A2: "); scanf("%d", &A2);
    printf("Please enter A3: "); scanf("%d", &A3);
    printf("Please enter A4: "); scanf("%d", &A4);

    final_check(A0, A1, A2, A3, A4);
    return 0;
}
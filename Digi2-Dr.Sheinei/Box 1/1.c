#include <stdio.h>

int main() {
    float Number1, Number2;

    // خواندن اعداد از کاربر
    printf("Please enter Number1: ");
    scanf("%f", &Number1); // فرمت صحیح برای خواندن float

    printf("Please enter Number2: ");
    scanf("%f", &Number2); // فرمت صحیح برای خواندن float

    // انجام عملیات و چاپ نتایج
    printf("Number1 + Number2 = %.2f\n", Number1 + Number2); // جمع
    printf("Number1 - Number2 = %.2f\n", Number1 - Number2); // تفریق
    printf("Number1 * Number2 = %.2f\n", Number1 * Number2); // ضرب

    // بررسی تقسیم بر صفر قبل از انجام تقسیم
    if (Number2 != 0) {
        printf("Number1 / Number2 = %.2f\n", Number1 / Number2); // تقسیم
    } else {
        printf("Number1 / Number2 = Undefined (Division by zero)\n"); // خطای تقسیم بر صفر
    }

    return 0;
}
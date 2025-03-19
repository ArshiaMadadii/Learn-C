#include <stdio.h>
#include <string.h>

int main() {
    int num, i;
    printf("Please enter num: ");
    scanf("%d", &num);

    char buffer[100] = ""; // یک بافر برای ذخیره‌ی خروجی

    for (i = 1; i <= num; i++) {
        char temp[10];
        sprintf(temp, "%d", i); // تبدیل عدد به رشته
        strcat(buffer, temp); // اضافه کردن عدد به بافر
        printf("%s\n", buffer); // چاپ بافر
    }

    return 0;
}
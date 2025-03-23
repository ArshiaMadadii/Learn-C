#include <stdio.h>

void send_message(void)
{
    printf("learn function\n");
}

int main()
{

    printf("before\n");
    send_message();
    printf("after\n");
}
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int lastThree = num % 1000;

    if (lastThree % 8 == 0)
        printf("%d is divisible by 8", num);
    else
        printf("%d is not divisible by 8", num);

    return 0;
}

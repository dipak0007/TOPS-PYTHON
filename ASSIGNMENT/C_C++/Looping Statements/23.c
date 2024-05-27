// C Program to Reverse a Number
#include <stdio.h>

int main() {
    int num, rev = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number = %d", rev);
    return 0;
}
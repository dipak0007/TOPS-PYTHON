#include <stdio.h>

int main() {
    int num=5;

    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

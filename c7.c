#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if number is divisible by any number other than 1 and itself
    for (i = 2; i <= n/2; ++i) {
        if (n%i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is not a prime number.\n");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}
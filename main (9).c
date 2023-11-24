//Summing up 2^2+4^2+6^2+8^2…+n USING C program

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }

    printf("The sum of squares of even numbers from 2^2 to %d^2 is: %d\n", n, sum);
    return 0;
}

//Summing up series 1 + 2 + 3 + 4….. +n

#include<stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter no of terms: ");
    scanf("%d", & n);

    sum = (n * (n + 1)) / 2;

    printf("Sum: %d\n", sum);

    return 0;
}
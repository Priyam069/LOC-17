#include <stdio.h>
int main() 
{
    int n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        rem = n % 10;
        sum += rem;
        n /= 10;
    } while (n > 0);
    printf("Sum is = %d", sum);
    return 0;
}

#include <stdio.h>

int main() {
    int num;
    int factorial=1;
    printf("Enter a number to find the factorial: ");
    scanf("%d", &num);
    
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
}

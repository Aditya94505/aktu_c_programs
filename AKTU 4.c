#include <stdio.h>
#include <conio.h>
void main() {
    float celsius, fahrenheit;
    clrscr();
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    getch();
}

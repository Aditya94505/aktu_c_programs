#include <stdio.h>
#include <conio.h>
void main() {
	int num1,num2,num3;
	clrscr();
	printf("Enter three numbers: ");
	scanf("%d%d%d", &num1,&num2,&num3);
	if(num1>=num2 && num1>=num3) {
		printf("The greatest number is: %d\n",num2);
	}
	else if(num2>=num1 && num2>=num3) {
		printf("The greatest number is: %d\n",num2);
	}
	else{
		printf("The greatest number: %d\n",num3);
	}
	getch();
}

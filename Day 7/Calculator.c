#include<stdio.h>
int input(int op);
int main(){
	int operation;
	// Choosing option
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\nChoose the operation (1-4) : ");
	scanf("%d", &operation);
	// calling function according to the operation
	switch (operation){
		case 1:
			input(operation);
			break;
		case 2:
			input(operation);
			break;
		case 3:
			input(operation);
			break;
		case 4:
			input(operation);
			break;
		default:
			printf("Invalid input!");
	}
	return 0;
}
// function to perform operation
int input(int op){
	int num1, num2;
	printf("\nEnter first number : ");
	scanf("%d", &num1);
	printf("\nEnter second number : ");
	scanf("%d", &num2);
	switch (op){
		case 1:
			printf("\n%d + %d = %d", num1, num2, num1+num2);
			break;
		case 2:
			printf("\n%d - %d = %d", num1, num2, num1-num2);
			break;
		case 3:
			printf("\n%d X %d = %d", num1, num2, num1*num2);
			break;
		case 4:
			printf("\n%d / %d = %f", num1, num2, (float)num1/(float)num2);
			break;
	}
	return 0;
}

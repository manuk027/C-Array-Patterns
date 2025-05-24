
#include<stdio.h>
void fact(int num);
int main(){

	int num;
	// taking input from the user
	printf("Enter a number : ");
	scanf("%d", &num);

	//calling function to evaluate factorial of a number
	fact(num);
	return 0;
}

// function to calculate factorial
void fact(int num){

	int i, res=1;
	for(i=1; i<=num; i++){
		res*=i;
	}
	printf("Factorial of %d is %d", num, res);

}

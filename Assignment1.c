
#include <stdio.h>
int main() {
	int n, sum = 0, i;

	printf("Enter a number: ");
 	scanf("%d", &n); // added '&' to get value to n

 	for (i = 1; i <= n; i++){
 		sum += i; // this statement was added to a for loop
 	}

 	printf("Sum is %d", sum);

 	return 0;
}

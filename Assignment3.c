

#include <stdio.h>

int main() {
	int num, i;

	printf("Enter a number: ");
	scanf("%d",  &num); //added '&' and a ','

	for (i = 1; i <= 10; i++) {
		printf("\n%d X %d = %d", num, i, num * i);
	}

	return 0;
}

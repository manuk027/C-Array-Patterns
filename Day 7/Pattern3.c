/*
	A B C D E 
	F G H I J 
	K L M N O 
	P Q R S T 
*/

#include <stdio.h>
int main(){

	int i, j, n=4;
	char alpha='A';

	for(i=1; i<=n; i++){

		for(j=1; j<=n+1; j++){
			printf("%c ", alpha);
			alpha++;
		}

		printf("\n");
	}

	return 0;
}

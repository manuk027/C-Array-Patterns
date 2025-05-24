/*
 	 	 	 	 A
 	 	 	 	 B C
 	 	 	 	 D E F
 	 	 	 	 G H I J
 	 	 	 	 K L M N O
 */

#include<stdio.h>
int main(){

	int i, j, n=5;
	char alpha='A';
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%c ", alpha);
			alpha++;
		}
		printf("\n");
	}
	return 0;
}

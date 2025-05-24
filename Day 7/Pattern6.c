/*
 	 	 	 	 *       *
 	 	 	 	 **     **
 	 	 	 	 * *   * *
 	 	 	 	 *  * *  *
 	 	 	 	 *   *   *
 */

#include <stdio.h>
int main(){
	int i, j, n=5;
	for(i=1; i<=n; i++){
		for(j=1; j<=n*2-1; j++){
			if(j==1  || j==9 || i==j || i+j==10){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

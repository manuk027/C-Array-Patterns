/*
 	 	 	 	 *   *   *
 	 	 	 	 *  * *  *
 	 	 	 	 * *   * *
 	 	 	 	 **     **
 	 	 	 	 *       *
*/

#include <stdio.h>
int main(){
	int i, j, n=5;

	for(i=n; i>=1; i--){
		for(j=1; j<=n*2-1; j++){
			if(j==9 || j==1 || i==j || i+j==10){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}


	return 0;
}

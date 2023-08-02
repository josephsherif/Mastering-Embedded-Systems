/*
 * Transpose of matrix.c
 *
 *  Created on: 2 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
int main(void){
	float matrix [20][20];
	float transpose[20][20];
	int row ,column ,i,j;
	printf("Enter rows and columns of the matrix: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&row,&column);
	printf("\nEnter elements of matrix : \n");
	for (i =0 ; i < row ; i++){
		for(j = 0 ; j < column ;j++){
			printf("Enter elements a%d%d ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix[i][j]);
		}
	}
	printf("\nEntered matrix: \n ");
	for(i =0; i< row; i++){
		for(j = 0; j< column;j++){
			printf("%.2f \t",matrix[i][j]);
		}
		printf("\n");
	}
	for(i =0 ;i < column ; i++){
		for(j =0; j< row; j++){
			transpose[i][j] = matrix [j][i];
		}
	}
	printf("\nTranspose matrix: \n ");
		for(i =0; i< column; i++){
			for(j = 0; j< row;j++){
				printf("%.2f \t",transpose[i][j]);
			}
			printf("\n");
		}
}
*/

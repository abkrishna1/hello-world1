//Matrix multiplication
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nrow1, ncol1, i, j, k, **matrix1, **matrix2, **matrix3, nrow2, ncol2;
	char doContinue;
    printf("Matrix multiplication\n");
	do {
        printf("Enter the size of matrix1 as numberOfRows numberOfColumns: ");
        scanf("%d %d", &nrow1, &ncol1);
        printf("Enter the size of matrix2 as numberOfRows numberOfColumns: ");
        scanf("%d %d", &nrow2, &ncol2);
        if(ncol1 != nrow2) {
            printf("The matrix multiplication is not possible. Please try with different matrices.\n");
            doContinue = 'y';
            continue;
        }
        matrix1 = (int **) malloc(nrow1*sizeof(int *));
        for(i=0;i<nrow1;i++) {
            matrix1[i] = (int *) malloc(ncol1*sizeof(int));
            printf("Enter the elements of row %d : ", i+1);
            for(j=0;j<ncol1;j++)
                scanf("%d", &matrix1[i][j]);
        }
        matrix2 = (int **) malloc(nrow2*sizeof(int *));
        for(i=0;i<nrow2;i++) {
            matrix2[i] = (int *) malloc(ncol2*sizeof(int));
            printf("Enter the elements of row %d : ", i+1);
            for(j=0;j<ncol2;j++)
                scanf("%d", &matrix2[i][j]);
        }
        printf("The resultant matrix is :\n");
        matrix3 = (int **) malloc(nrow1*sizeof(int *));
        for(i=0;i<nrow1;i++) {
            matrix3[i] = (int *) malloc(ncol2*sizeof(int));
            for(j=0;j<ncol2;j++) {
                    matrix3[i][j] = 0;
                    for(k=0;k<nrow1;k++) {
                        matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
                    }
                    printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
		printf("\nDo you want to multiply another pair of matrices? (y/n):");
		scanf("\n%c", &doContinue);
		for(i=0;i<nrow1;i++)
            free(matrix1[i]);
		free(matrix1);
		for(i=0;i<nrow2;i++)
            free(matrix2[i]);
		free(matrix2);
		for(i=0;i<nrow1;i++)
            free(matrix3[i]);
		free(matrix3);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

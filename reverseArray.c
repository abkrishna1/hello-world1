//Reversing an array without using another array
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i,*arr;
	char doContinue;
    printf("Reversing an array without using another array\n");
	do {
        printf("Enter the number of elements in the array: ");
        scanf("%d", &size);
        arr = (int *) malloc(size*sizeof(int));
        printf("\nEnter the elements : ");
        for(i=0;i<size;i++)
            scanf("%d", &arr[i]);
        for(i=0;i<size/2;i++) {
            int temp = arr[i];
            arr[i] = arr[size-1-i];
            arr[size-1-i] = temp;
        }
        for(i=0;i<size;i++)
            printf("%d ", arr[i]);
		printf("\nDo you want to reverse another array? (y/n):");
		scanf("\n%c", &doContinue);
        free(arr);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

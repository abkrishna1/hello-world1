//Linear search
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i, key;
	char doContinue;
    printf("Linear Search\n");
    printf("Enter the number of elements : ");
    scanf("%d", &size);
    int *arr = (int *) malloc(size*sizeof(int));
    printf("\nEnter the elements : ");
    for(i=0;i<size;i++)
        scanf("%d", &arr[i]);
	do {
        printf("\nEnter the key to look for: ");
        scanf("%d", &key);
        int ind = -1;
        for(i=0;i<size;i++) {
            if(arr[i] == key) {
                ind = i;
                break;
            }
        }
		(ind == -1)? printf("Element is not present in array\n")
                 : printf("Element is present at index %d\n", ind);
		printf("Do you want to search another element? (y/n):");
		scanf("\n%c", &doContinue);
        free(arr);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

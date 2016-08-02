//Binary search
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int j;
    for(j=low; j <= high-1; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if( low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int binSearch(int arr[], int low, int high, int key) {
    if(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == key)
            return mid;
        else if(key < arr[mid])
            return binSearch(arr, low, mid-1, key);
        else
            return binSearch(arr, mid+1, high, key);
    }
    return -1;
}
int main(void) {
	int size, i, key;
	char doContinue;
    printf("Binary Search\n");
    printf("Enter the number of elements : ");
    scanf("%d", &size);
    int *arr = (int *) malloc(size*sizeof(int));
    printf("\nEnter the elements : ");
    for(i=0;i<size;i++)
        scanf("%d", &arr[i]);
    quicksort(arr, 0, size-1);
	do {
        printf("\nEnter the key to look for: ");
        scanf("%d", &key);
        int ind = binSearch(arr, 0, size-1, key);
		(ind == -1)? printf("Element is not present in array\n")
                 : printf("Element is present at index %d\n", ind);
		printf("Do you want to search another element? (y/n):");
		scanf("\n%c", &doContinue);
        free(arr);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

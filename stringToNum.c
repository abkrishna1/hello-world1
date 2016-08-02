//Convert a string to number
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i;
	char doContinue, *carr;
    printf("Convert a string to number\n");
	do {
        printf("Enter the number of characters in the string: ");
        scanf("%d", &size);
        carr = (char *) malloc((size+1)*sizeof(char));
        printf("\nEnter the string(only digits) : ");
        scanf("%s", carr);
        int num=0;
        for(i=0;i<size;i++) {
            int current = carr[i] - '0';
            num = num*10 + current;
        }
        printf("The converted number is : %d", num);
		printf("\nDo you want to check for another string? (y/n):");
		scanf("\n%c", &doContinue);
		free(carr);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

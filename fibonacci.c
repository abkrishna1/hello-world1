//Fibonacci Series
#include <stdio.h>

int main(void) {
	int n, i;
	char doContinue;
    printf("Fibonacci Series\n");
	do {
        printf("Enter the number of elements in the series : ");
        scanf("%d", &n);
        int a = 0, b = 1, c;
        printf("The Fibonacci series of size %d is : %d %d", n, a, b);
        for(i=2;i<n;i++) {
            c = a+b;
            a = b;
            b = c;
            printf(" %d", c);
        }
		printf("\nDo you want to see another fibonacci series? (y/n):");
		scanf("\n%c", &doContinue);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

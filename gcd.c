//GCD(a,b)
#include <stdio.h>

int main(void) {
	int num1, num2;
	char operatr, doContinue;
    printf("GCD(int a, int b)\n");
	do {
        printf("Enter the two numbers : ");
		scanf("%d %d", &num1, &num2);
		printf("GCD of %d & %d is : ", num1, num2);
		while(num1 != num2) {
            if(num1 > num2)
                num1 = num1 - num2;
            else if(num2 > num1)
                num2 = num2 - num1;
		}
		printf("%d\n", num1);
		printf("Do you want to evaluate another expression? (y/n):");
		scanf("\n%c", &doContinue);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}
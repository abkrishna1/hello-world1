//Simple Calculator
#include <stdio.h>

int main(void) {
	double operand1, operand2;
	char operatr, doContinue;
	do {
        printf("Simple Calculator\n")
		printf("Enter the expression as operand1 operator operand2 : ");
		scanf("%lf %c %lf", &operand1, &operatr, &operand2);
		switch( operatr ) {
			default  : printf("The operator is not supported\n"); break;
			case '+' : printf("%lf\n", operand1+operand2); break;
			case '-' : printf("%lf\n", operand1-operand2); break;
			case '*' : printf("%lf\n", operand1*operand2); break;
			case '/' : printf("%lf\n", operand1/operand2); break;
		}
		printf("Do you want to evaluate another expression? (y/n):");
		scanf("\n%c", &doContinue);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

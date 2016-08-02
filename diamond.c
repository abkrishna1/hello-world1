#include <stdio.h>

int bic(int n, int r) {
	if(r == 0 || n == 0 || r == n)
		return 1;
	else
		return bic(n-1, r-1) + bic(n-1, r);
}
int main ()
{
	int num, i, j;
	printf("Enter an integer:\n");
	scanf("%d", &num);
	for(i=0; i< num+1; i++) {
		for(j=num-i;j>0;j--)
			putchar(' ');
		for(j=i;j>-1;j--) {
			//printf("%d ", bic(i,j));
			printf("* ");
		}
		printf("\n");
	}
	for(i=num-1; i>-1; i--) {
		for(j=1;j<num-i+1;j++)
			putchar(' ');
		for(j=i;j>-1;j--) {
			//printf("%d ", bic(i,j));
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

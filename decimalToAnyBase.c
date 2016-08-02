#include<stdio.h>
void printNew(int b, long long n) {
    if(!n)
        return;
    printNew(b, n/b);
    int temp = n%b;
    char c;
    if(temp >9) {
        switch(temp) {
            case 10 : c = 'A'; break;
            case 11 : c = 'B'; break;
            case 12 : c = 'C'; break;
            case 13 : c = 'D'; break;
            case 14 : c = 'E'; break;
            case 15 : c = 'F'; break;
        }
        printf("%c", c);
    }
    else
        printf("%d", temp);
}
int main()
{
	int t, b, i;
	long long n;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        printf("Enter the decimal number and the base to be converted to: ");
        scanf("%d\n%lld", &b, &n);
        printf("\nThe number in base %d is : ", b);
        printNew(b,n);
        printf("\n");
    }
	return 0;
}

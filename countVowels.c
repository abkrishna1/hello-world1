//counting the number of vowels, consonants and white spaces
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	int size, i;
	char doContinue, *carr;
    printf("counting the number of vowels, consonants and white spaces\n");
	do {
        printf("Enter the number of characters in the string: ");
        scanf("%d", &size);
        carr = (char *) malloc((size+1)*sizeof(char));
        printf("\nEnter the string : ");
        fgets(carr, size+1, stdin);
        int nvow=0, ncons=0, nwhites=0;
        for(i=0;i<size;i++) {
            char current = tolower(carr[i]);
            printf("%c ", current);
            if(current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u')
                nvow++;
            else if(isalpha(current))
                ncons++;
            else if(isspace(current))
                nwhites++;
        }
        printf("There are %d Vowels, %d Consonants, %d Whites paces in the given string %s", nvow, ncons, nwhites, carr);
		printf("\nDo you want to check for another string? (y/n):");
		scanf("\n%c", &doContinue);
        free(carr);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

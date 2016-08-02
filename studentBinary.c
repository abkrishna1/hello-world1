#include <stdio.h>
#include <stdlib.h>
typedef struct _student
{
    int rno;
    char name[10];
} student;

int main ()
{
	FILE *fp1 = fopen("C:\\Users\\Balakrishna A\\Desktop\\Balakrishna\\CPractice\\helloBinary.txt", "wb+");
	if(fp1 == NULL) {
		printf("There is an error opening the file1\n");
		exit(1);
	}
	printf("\nBinary file operations!\nFirst! let us create student database. Enter number of students: ");
	int n, i;
	scanf("%d", &n);
	student students[n];
	for(i=0;i<n;i++) {
        printf("\nEnter the roll number and name of the student %d: ", i);
        scanf("%d %s", &students[i].rno, &students[i].name);
	}
	fwrite(students, sizeof(student), n, fp1);
	printf("Now let us search for the students with their roll numbers\n");
	student *newStudents = (student *) malloc(n*sizeof(student));
	rewind(fp1);
	fread(newStudents, sizeof(student), n, fp1);
	fclose(fp1);
	char doContinue;
	do {
        printf("Enter the roll number of the student to look for: ");
        int key, isFound = 0;
        scanf("%d", &key);
        for(i=0;i<n;i++) {
                //printf("\n%d %s", newStudents[i].rno, newStudents[i].name);
            if(newStudents[i].rno == key) {
                printf("The student is found in the database.");
                printf("\n The name of the student is : %s", newStudents[i].name);
                isFound = 1;
            }
        }
        if(!isFound)
            printf("The student is not found in the database.");
        printf("\nDo you want to search for another student?(y/n) :");
        scanf("\n%c", &doContinue);
	} while( doContinue == 'y' || doContinue == 'Y');
	return 0;
}

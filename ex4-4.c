#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.4 */
	/* Excercise no.4-4 */
	
	int code;
	printf("Code\tDisk Drive Type\n");
	printf("----\t-----------------------------------\n");
	printf(" 1  \t360-kilobyte drive\n");
	printf(" 2  \t1.2-megabyte drive\n");
	printf(" 3  \t722-kilobyte drive\n");
	printf(" 4  \t1.4-megabyte drive\n");

	printf("\nEnter a Code: ");
	scanf("%d", &code);

	switch (code)
	{
	case 1:
	printf("360-kilobyte drive\n");
	break;
	case 2:
	printf("1.2-megabyte drive\n");
	break;
	case 3:
	printf("722-kilobyte drive\n");
	break;
	case 4:
	printf("1.4-megabyte drive\n");
	break;
	default:
	printf("Invalid code entered!\n");
	}	
	
	


}

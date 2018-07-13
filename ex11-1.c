#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.11 */
	/* Excercise no.1 */

	char string[199], c;
	int i = 0;
	printf("Enter a string: ");
	gets(string);
	
	while (string[i++] != '\0')
	{
	c = string[i-1];
	putchar(c);
	printf("\t %p\n", &c);
	}

	/* Function del_char which deletes character from a string */
	/* del_char has 3 arguments: string name, no. of characters to delete*/
	/* and the starting position of the deletion character */
	
	int numchar, startchar;
	printf("Enter the number of characters to be deleted: ");
	scanf("%d", &numchar);
	printf("Enter the starting position of deletion: ");
	scanf("%d", &startchar);
	void del_char (char [], int, int);
	del_char(string, numchar, startchar); 


}


void del_char(char str[], int num, int start)
{
	/* Accept string */
	/* While loop starts until Nul char */
	
	int i = 0, j = 1;
	char c;
	while (str[i++] != '\0')
	{
	if (i <= start)
		{
		c = str[i];
		putchar(c);
		}	
			
	}
}

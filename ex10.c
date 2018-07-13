#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.10 */


	/*What are pointers?*/
	/*Pointers are simply variable used to store the addressses of other variables.*/
	
	int *num_addr;
	int miles, dist;

	dist = 158, miles = 22;

	num_addr = &miles;
	
	printf("The address store in num_addr is %p\n", num_addr);
	printf("The value pointed to by num_addr is %d\n\n", *num_addr);
	
	num_addr = &dist;
	
	printf("The address store in num_addr is %p\n", num_addr);
	printf("The value pointed to by num_addr is %d\n", *num_addr);	

	/* Question 2 */
	/* Replace each of the following references using a pointer with a subscript reference */
	/* *(message + 6) >> message[6]; */
	/* *amount >> amount[0];*/
	/* *(yrs + 10) >> yrs[10]; */

	/* Question 3 */
	/* List all the 3 things which double prices[5]; causes the compiler to do?*/
	/* 1. The compiler allocates storage space for a double data type */
	/* 2. Creates a pointer names prices */
	/* 3. Equates the pointer constant to expression &prices[0] */

	/* Question 4 */
	/* Write "This is a sample" into array samtest */

	char samtest[] = {'T', 'h', 'i', 's',' ', 'i', 's',' ', 'a',' ', 's', 'a', 'm', 'p', 'l', 'e'};
	int i;

	for (i = 0; i < 16; i++)
	printf("%c", *(samtest + i)); 


}

#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */

	char string[100];
	printf("Enter a string: \n");
	gets(string);
	printf("\nThe string entered is: \n");
	puts(string);
	printf("The size of string is %d\n", sizeof(string));
	
	void vowels(char []);
	vowels(string);

}

void vowels(char str1[])
{
	int i = 0, count = 0;
	char c;
	
	while ((c = str1[i++]) != '\0')
	switch (c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			putchar(c);
			count++;
			printf("\t %d\n", i);
	}
	putchar('\n');
	
	printf("\nNumber of vowels found: %d\n", count);
}

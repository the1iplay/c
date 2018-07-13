#include<stdio.h>

void main(void)
{
	int array[] = {23, 23, 12, 5234, 838, 8234, 845, 1723, 1232};
	
	int *pointers;
	
	int i;

	
	for (i = 0; i < 9;i++)
	{
	pointers = &array[i];
	printf("The element pointer variable is pointing to is: %d\n", i);
	printf("The content of pointer is %d\n", *(pointers + i));
	printf("The address of pointer is %p\n", *(pointers);
	printf("The address of Array is   %p\n", &array[i]);
	printf("\n");
	}

}

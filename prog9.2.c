#include<stdio.h>
#define NUMROWS 3
#define NUMCOLS 4

void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.8 */
	/* Excercise no.8-5 */

	int i, j, val[NUMROWS][NUMCOLS] = {8, 16, 9, 52,
					   3, 15, 27, 6,
					   14, 25, 2, 10};

	for  (i = 0; i < NUMROWS; i++)
	{
	printf("\n");
		for (j = 0; j < NUMCOLS; j++)
		{
		val[i][j] = val[i][j] * 10;
		printf("%3d ", val[i][j]);
		}
	}
	printf("\n");

}

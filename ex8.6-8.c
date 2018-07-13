#include<stdio.h>
#include<math.h>
#define NUM_ELS 14
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.8 */
	/* Excercise no.8.3-8 */

	/* Two functions calce_avg() and variance() */
	
	float testvales[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
	float calc_avg(float [], float);
	float variance(float [], float, float);
	
	float average = calc_avg(testvales, NUM_ELS);

	printf("The average is: %4.2f\n", calc_avg(testvales, NUM_ELS));
	printf("The variance is :%4.2f\n", variance(testvales, NUM_ELS, average));
	

}

float calc_avg(float values[], float num_of_v)
{
	int i;
	float sumnum = 0.0;
	
	for (i = 0; i < num_of_v; i++)
		sumnum = sumnum + values[i];
	

	return (sumnum / num_of_v);
}

float variance(float values[], float numof, float avg)
{
	int i;
	/* To Calculate Variance: */
	/* Substract the average from each value */
	/* Squaring the values obtained */
	/* Adding them */
	/* Dividing the number of elements */

	float var = 0.0;

	for (i = 0; i < numof; i++)
	var = var + pow((avg - values[i]), 2);
	
	return (var / numof);
}








	

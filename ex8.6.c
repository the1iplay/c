#include<stdio.h>
#include<math.h>
#define NUM_ELS 10
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.8 */

	int value[NUM_ELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
	float average, stddev;
	float find_avg(int [], int);
	float std_dev(int [], int, float);
	
	average = find_avg(value, NUM_ELS);
	stddev = std_dev(value,NUM_ELS, average);
	
	printf("The average of the numers is %5.2f\n", average);
	printf("The standard deviaton of the numbers is %5.2f\n", stddev);

}

	
float find_avg(int nums[], int numel)

{
	int i;
	float sumnums = 0.0;
	
	for (i = 0; i < numel; i++)
		sumnums = sumnums + nums[i];

	return (sumnums / numel);	
	
}


float std_dev(int num[], int numel, float av)
{

	int i;
	float sumdev = 0.0;
	
	for (i = 0; i < numel; i++)
		sumdev = sumdev + pow((num[i] - av), 2);

	return (sqrt(sumdev / numel));

}

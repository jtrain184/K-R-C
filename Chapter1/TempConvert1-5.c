#include <stdio.h>
#define LOWER 0 	/*define lower limit of table */
#define UPPER 300	/*upper limit */
#define STEP 20		/*step size */

/* Ex 1-5 print Celsius-Fahrenheit table
	using for loop */
main()
{
	int fahr;
	printf("Celsius\tFahrenheit\n"); 	/*headings for temp table */
	printf("____________________\n");	/*line for temp table headings */
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));	
	
}

#include <stdio.h>

/* Ex 1-3. print Fahrenheit-Celsius table
	for fahr = 0, 20, ....., 300 */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;		/* lower limit of temp scale */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	fahr = lower;
	printf("Celsius\t\tFahrenheit\n"); 	/*headings for temp table */
	printf("____________________\n");	/*line for temp table headings */
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	}

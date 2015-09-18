#include <stdio.h>

/* Ex 1-3. print Celsius-Fahrenheittable
	for celsius = 0, 20, ....., 300 */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;		/* lower limit of temp scale */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	celsius = lower;
	printf("Celsius\t  Fahrenheit\n"); 	/*headings for temp table */
	printf("____________________\n");	/*line for temp table headings */
	while (celsius <= upper) {
		fahr = (celsius * (9.0/5.0)) + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	}

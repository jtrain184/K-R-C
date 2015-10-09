
#include <stdio.h>

int temp_convert(int lower, int upper, int step);

/* test fahrenheit to celsius function */

main()
{	
	temp_convert(0, 300, 20);
	return 0;
}

/*temp_convert : print a table of fahrenheit to celsius temperature
conversions, given the lower and upper limits and the interval */
int temp_convert(int lower, int upper, int step)
{
	int fahr, celsius;
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}


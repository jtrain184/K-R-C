#include <stdio.h>

/* Character input and output using getchar() and putchar() */
main()
{
	int c;
	int value;
	
	value = ((c = getchar()) != EOF);
	printf("%d\n", value);

}

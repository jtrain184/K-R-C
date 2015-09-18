#include <stdio.h>

/* Character input and output using getchar() and putchar() */
main()
{
	int c;
	
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

}

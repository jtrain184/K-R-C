#include <stdio.h>

/* A program that counts blanks, tabs, and newlines */
main()
{
	double c, blank, nl, tab;
	
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tab;
		else if (c == ' ')
			++blank;
			
			
	printf("Blanks:  %.0f\n", blank);
	printf("Tabs:  %.0f\n", tab);
	printf("New Line:  %.0f\n", nl);
}

#include <stdio.h>

/* count charcters in input; 2nd version */
main()
{
	double nc;
	
	for (nc = 0; getchar() != EOF; ++nc)
		;		/* Null Statment */
	printf("%.0f\n", nc);
}

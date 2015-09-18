#include <stdio.h>

/* A program that copies input to output and replaces mutliple blanks
with just one */
main()
{
	double c;
	
	while ((c = getchar()) != EOF){
		if (c == ' '){
		 while ((c = getchar() == ' '))
		 	;
		 putchar(' ');
		 if (c == EOF) break;
	}
	putchar(c);
}
}

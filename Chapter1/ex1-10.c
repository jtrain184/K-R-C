#include <stdio.h>

/* A program that copies input to output and replaces mutliple blanks
with just one */
main()
{
	int c;
	
	while ((c = getchar()) != EOF){
		
		switch (c) {
			case '\t':
				printf("\\t");
				break;
			case '\b':
				printf("\\b");
				break;
			case '\\':
				printf("\\\\");
				break;	
			default:
				putchar(c);
			 
	 }
	}
}

#include <stdio.h>

#define BACKSLASH '\\'
#define BACKSPACE '\b'
#define TAB '\t'

/* A program copies in put to output, and replaces each tab with \t, each backspace with \b, and each blackslash with \\.  This makes tabs and backspaces visible in an unambiguous way. */
main()
{
	int c;
	
	while ((c = getchar()) != EOF){
		
		if(c== BACKSLASH) {
			printf("\\\\");
		
		}else if (c == BACKSPACE) {
			printf("\\b");
			
		}else if (c == TAB) {
			printf("\\t");
			
		}else {
			putchar(c);
		}
	}
}

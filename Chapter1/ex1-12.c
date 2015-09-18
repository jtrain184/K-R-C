#include <stdio.h>

#define IN 	1 /* inside a word */
#define OUT 0 /* outside a word */
/* Copyright 2015 jtrain */
/* A program that prints its input one word per line. */
main()
{
	int c, state;
	
	state = OUT;
	
	while ((c = getchar()) != EOF) {
		putchar(c);
		
		if (c ==' ' || c == '\n' || c == '\t'){
			state = OUT;
			printf("\n");	
		}
		else if (state == OUT) {
			state = IN;
		}
	}
}

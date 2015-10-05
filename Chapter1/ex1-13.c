/* Exercise 1-13 Print a vertical histogram of word legnths 
				in a sentence	*/

#include <stdio.h>

#define IN 	1 /* inside a word */
#define OUT 0 /* outside a word */

main()
{
	int c, i, j, wlen[30];
	int state, max;
	
	for (i = 0; i < 30; ++i)
		wlen[i] = 0;
		
	i = 0;
	
/*  Gather the legnths of up to 30 words */
	while (((c = getchar()) != EOF) && i < 30){
		if (c != ' ' && c!= '\n' && c != '\t') {
				state = IN;
				++wlen[i];
		}
		else
		if (state == IN){
			state = OUT;
			++i;
		}
	}
	
	if (i !=0 && wlen[i] == 0)
		--i;
		
/* Determine the greatest word length */
	j = i;
	max = 0;
	
	for (i = 0; i <= j; ++i)
		if (wlen[i] > max)
			max = wlen[i];
/*Print the histogram */
	while (max != 0) {
		for (i = 0; i <= j; ++i) {
			if (wlen[i] < max)
				putchar(' ');
			else 
				putchar('X');
			if(i == j)
				putchar('\n');
		}
		--max;
	}
	
	printf("\nEND OF PROGRAM\n");
	
}

	
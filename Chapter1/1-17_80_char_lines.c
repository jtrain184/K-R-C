/* Print all lines that are longer than 80 characters */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);


/* print the longest input line */
main()
{
	int len;	/*current line length */
	char line[MAXLINE]; /* current input line 8 */
	
	while ((len = getline(line, MAXLINE)) > 0){
		if (len-1 > 80) {
			printf("# Charcters in last line: %d\n", len-1);
			printf("%s", line);
		}
	}
	printf("\nEND OF PROGRAM\n");
	return 0;
}	

/* getline:  read a line into s, return length */
int getline (char s[], int lim)
{
		int c, i;
		
		for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
			s[i] = c;
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
		return i;
}





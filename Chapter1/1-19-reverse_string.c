#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void reverse(char line[]);

/* reverse a line */
main()
{
	int len;	/*current line length */
	int max;	/* maximum length seen so far */
	char line[MAXLINE]; /* current input line 8 */
	char longest[MAXLINE]; /* longest line saved here */
	
	max = 0;
	while ((getline(line, MAXLINE)) > 0){
		reverse(line);
		printf("%s\n", line);
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

/* copy: copy 'from' into 'to; assume to is big enough */
void reverse (char s[])
{
		int i, j;
		char hold;
		
		i = 0;
		while (s[i] != '\0')
			++i;
		j = i - 1;
		for (i=0; i < j; ++i){
			hold = s[i];
			s[i] = s[j];
			s[j] = hold;
			--j;
		}
			
}




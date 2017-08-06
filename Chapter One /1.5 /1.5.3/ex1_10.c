#include <stdio.h>


/* 
 Exercise 1-10 in K&R - The C programming language. 

 Write a program to copy its input to its output, 
 replacing each tab by \t, each backspace by \b, and each backslash by \\. 
 This makes tabs and backspaces visible in an unambiguous way.

*/
int main(){

	int c; // character which is to be used by getchar

	while ( (c = getchar()) != EOF ){

		/* 
		Since putchar only works on single characters, multiple statements must be used.
		*/
		if(c=='\t'){
			putchar('\\');
		    putchar('t');
		}else if (c=='\b'){
			putchar('\\');
		    putchar('b');
		}else if (c=='\\'){
			putchar('\\');
		    putchar('\\');
		} else{
			putchar(c);
		}


	}
	return 0;
}
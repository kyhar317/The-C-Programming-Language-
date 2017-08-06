/* 
Exercise 1-23 (K&R): 
Write a program to remove all comments from a C program. 
Dont forget to handle quoted strings and character constants properly. 
C comments dont nest.
*/

#include <stdio.h> 

#define IN 1 // inside of a comment 
#define OUT 0 // outside of a comment 



int main(){
	int c; // to fetch input given to program .. 
	int state = OUT; // intially were out of a comment 
	int quote = OUT;
	int inblock = OUT;

	while (  (c = getchar() ) != EOF ){ // while there are still characters


			if(c == '\'' && quote == OUT && state == OUT){
				quote = IN;
			}else if (c == '\'' && quote == IN && state == OUT){
				quote = OUT;
			}

			if( c == '/' && quote == OUT){
				state = IN; // if the state is in, meaning its inside a comment 
			}



			if(state == IN && c == '*'){
				// youre now in the inblock..
				inblock = IN; 
			}

			if(inblock == IN && c == '*'){
				// check to see if the next character is a / 
				int nc = getchar();
				if( nc == '/')
					inblock = OUT;
			}



			if(state == IN && c == '\n' && inblock == OUT)
				state = OUT;

			if(state == OUT){
				putchar(c);
			}
	}


	return 0;
}

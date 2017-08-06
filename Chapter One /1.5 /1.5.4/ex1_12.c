#include <stdio.h> 

/* 
Exercise 1-12 from K&R: 
Write a program that prints its input one word per line.
*/

int main(){

	int c, nl, nw, nc, state;
	nl = nw = nc = 0;

	while(( c = getchar() )!=EOF){
		++nc;
		// check if the character is equal to the newline escape sequence
		if(c == ' ' || c == '\n' || c == '\t'){
			// we're out of the word, so change the state
			putchar('\n');
		}else{
		putchar(c);
	    }
		
	}

	return 0;
}
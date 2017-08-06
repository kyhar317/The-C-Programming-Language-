#include <stdio.h> 


#define IN 1
#define OUT 0

int main(){

	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while(( c = getchar() )!=EOF){
		++nc;
		// check if the character is equal to the newline escape sequence
		if( c == '\n'){
			// incrment the newline counter
			++nl;
			putchar(c);

		//check to see if we're in a space or a newline or a tab.. 
		}else if(c == ' ' || c == '\n' || c == '\t'){
			// we're out of the word, so change the state
			putchar('\n');
			state = OUT;
		}else if ( state == OUT ){
			// if the state is out, swap it to in and increment the word count
			state = IN;
			++nw;
		}
	}

	printf("%s%d %s%d %s%d\n", "Lines: ", nl, "Words: ", nw, "characters:  ", nc);
	return 0;
}
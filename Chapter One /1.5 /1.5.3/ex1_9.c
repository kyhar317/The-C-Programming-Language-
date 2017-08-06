#include <stdio.h> 


/*
 The C programming language exercise 1-9: 

  Write a program to copy its input to its output, replacing each string of one or
  more blanks by a single blank.

*/

int main(){

int c; // character to be captured by the getline function

int be; // int denoting whether or not a blank has been encountered 
be = 0; // 0 for false, 1 for truth. Treat as a regular boolean flag. 

while ( (c=getchar()) != EOF){  // while the program has input 
    
	if( (c == ' ') && be == 0){ // if there is a space and a blank hasn't been encountered..
		putchar(c); // print the character, even if it's a single space.. 
		be = 1; // set the blank encountered flag to one..
	}else if(c!=' '){ // if it's not a blank
		be = 0; // reset the blank encountered flag
		putchar(c); // print the character
	}
}

return 0;
}
/* 
 Exercise 1-20 (K&R) Write a program detab that replaces tabs in the input with the 
 proper number of blanks to space to the next tab stop. Assume a fixed set of 
 tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/
#include <stdio.h> 
#define TABLENGTH 8 // unix traditional tab stop is 8 characters

int main(){

	int c; // character for input via getchar()
	int i; 
	while( (c=getchar()) !=EOF){
		if(c == '\t'){
			// loop it for the number of tabs and replace with spaces
			for(i=0; i<TABLENGTH; ++i){
				putchar(' ');
			}
		}else{
			putchar(c);
		}
	}
	return 0;
}
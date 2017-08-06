/* 
Exercise 1-21 (K&R): 
Write a program to `fold' long input lines into two or more shorter lines 
after the last non-blank character that occurs before the n-th column of input. 
Make sure your program does something intelligent with very long lines, 
and if there are no blanks or tabs before the specified column.
*/

#include <stdio.h> 

#define LONGLINE 80 // abmigoius marker for long lines 

int main()
{
  int c; 
  
  int sl = 0;
  while ( (c = getchar()) !=EOF ){
  	// count the occurances until a '\n' is found 

  	if( c != '\n'){
  		// print out the characater and increment the same line count
  		putchar(c);
  		++sl;

  		if(sl >= LONGLINE && c==' '){ // it won't split in the middle of a word..
  		 // print a new line and reset the count 
  		  putchar('\n');
  		  sl = 0;
  	   }
  	}else{
  		// new line char encountered
  		sl = 0;
  		putchar('\n');
  	}

  

 }
  return 0;
}


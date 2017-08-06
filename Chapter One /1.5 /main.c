#include <stdio.h> 

/* The following program uses the functions getchar and putchar 
   to process input and output in C. You can do a surprising amount with
   these two basic functions. The simplest program is one which copies
   its input to its output one character at a time. */ 


/* Copy input to the output - 1st version. */ 
int main(){

int c;

c = getchar();
while(c!=EOF){
	putchar(c);
	c = getchar();
}
 return 0;
}
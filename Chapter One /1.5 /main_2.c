#include <stdio.h> 


/* Copy the input to the output - 2nd version */ 

int main(){

	int c;

	while((c= getchar())!=EOF)
		putchar(c); 
	
	return 0;
}
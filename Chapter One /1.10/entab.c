/* 
Exercise 1-20 (K&R): 
Write a program entab that replaces strings of blanks 
by the minimum number of tabs and blanks to achieve the same spacing. 
Use the same tab stops as for detab. When either a tab or a single blank 
would suffice to reach a tab stop, which should be given preference?
*/ 

#include <stdio.h> 


// same number of spaces used in the detab program. 
#define TABLENGTH 8 

int main(){

	int c; // character to be captured by the getchar() function.. 
	int i;
	int nc;
	int bs;

	while ( (c = getchar()) != EOF ){
		if (c == ' ')
		{
			i = 1; // there is at least one blank found ..

			while ( (c = getchar() ) == ' ') // while there are sucessive blanks 
				++i;

			if(i == 1){  // if there is only one space. 
				putchar(' ');
			}else{
			// depending on the value of i, replace the amount of tabs .. 
			int numtabs; 
			for(numtabs = 0; numtabs<( i / TABLENGTH); ++numtabs){
				// put a char
				putchar('\t');
			}

			// now get the remainder of the tabs and replace them with spaces 
			for( bs = 0; bs < ( i % TABLENGTH); bs++){
				putchar(' ');
			}
		 }
		}
		putchar(c);
	  }
	
	return 0;
}






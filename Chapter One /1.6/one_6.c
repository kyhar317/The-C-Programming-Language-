#include <stdio.h>


/* This small program counts digits, whitespace and the other characters */ 

/* Since there are 12 categories of input (10 digits, whitespace and other) - we can
   use an array to capture the occurances of each digit, rather than having 10 individual 
   variables */ 

int main(){

	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;

	for(i = 0; i<10; i++)
		ndigit[i] = 0; // initalize all values to zero 

	while( (c = getchar() ) != EOF){
		if( c>= '0' && c<='9'){
			// increment the count of the digit 
			++ndigit[c-'0']; // doing so avoids type mismatches
		}else if (c == ' ' || c == '\n' || c == '\t'){
			++nwhite; // increment the number of white spaces 
		}else{
			// its other so increment the count of other 
			++nother;
		}
	}

		// print out the captured data.. 
		printf("%s", "Digits: ");
		for(i = 0; i<10; ++i){
			// print the corresponding array value
			printf("%d ", ndigit[i]);
		}

		// print the whitespace and other data.. 
		printf(", whitespace = %d, other = %d\n", nwhite, nother);
	

	return 0;
}
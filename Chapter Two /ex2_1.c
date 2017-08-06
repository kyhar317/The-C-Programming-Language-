/*
Exercise 2-1:
 Write a program to determine the ranges of char, short, int, and long variables, 
 both signed and unsigned, by printing appropriate values from standard headers 
 and by direct computation. Harder if you compute them: determine the ranges of the 
 various floating-point types.
*/
#include <stdio.h> 
#include <limits.h>
#include <float.h>

// rather than using the default math.pow() function in math.h, write your own
int power(int base, int exp);

int main(){

	// print the limits from the limits.h file 

	printf("Integer Min: %d  Integer Min: %d\n",  INT_MIN, INT_MAX);
	printf("Short Min: %d  Short Max: %d\n",  SHRT_MIN, SHRT_MAX);
	printf("Char Min: %d  Char Max: %d\n",  CHAR_MIN, CHAR_MAX);

	// long variables, both signed and unsigned 
	printf("Unsigned Long Min: %d  Unsinged long Max: %lu \n",  0, ULONG_MAX);	
	printf("Long Min: %ld  Long Max: %ld\n",  LONG_MIN, LONG_MAX);

	/* 
	Do direct computation, via either powers or loops  
	*/


	printf("%d: ",power(2,31)); // the 4*8 = 32 :  (2^31 - -1 is the maximum size) - 
	//so 2^31 should be a large negative number


	return 0;
}


// recursive power function 
int power(int base, int exp){
	if(exp == 0){
		return 1;
	}else{
	return base*power(base, exp-1);

}
}
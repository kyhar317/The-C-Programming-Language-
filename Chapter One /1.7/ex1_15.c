#include <stdio.h>

/* 
 Exercise 1-15 from K&R:
 Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/

float convert(float farh);
int main(){

   // similar loop to the one defined in the original temperature
   int i;
   for(i = 0; i < 100; i = i+5){
   	// do the conversion and print the value
   	printf("farenheit : %d celsius : %3.1f\n", i, convert(i));
   } 
	return 0;
}


/* Function converts a given farenheit temperature to it's celsius complement */
float convert(float farh){

	return (5.0/9.0)*(farh - 32);

}
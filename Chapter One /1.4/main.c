#include <stdio.h> 

#define LOWER 0
#define UPPER 300
#define STEP 20 

/*
 print the same farenheit to celsius conversion table
*/

int main(){

	int farh;

	for(farh = LOWER; farh<=UPPER; farh = farh + STEP)
		printf("%3d %6.1f\n", farh, (5.0/9.0)*(farh-32));
	return 0;
}
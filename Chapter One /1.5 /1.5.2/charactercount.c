#include <stdio.h>


/* This program counts the number of characters inputted into the 
   program. It's similar to the copying program, but it also has 
   a counter of characters */ 

int main(){

    /*long cc; // initalize the variable for the character count 

    cc = 0; // set it to zero initially 

    while(getchar() != EOF)
    	++cc; // increment the character count 

    // print the character count .. 
    printf("%s\n%ld\n", "character count:", cc);
    */ 

    // you can get even bigger numbers by using the double 
    double nc; 

    for (nc = 0; getchar()!=EOF; ++nc)
    	; // don't need to execute anything 

    // outside of the loop 
    printf("%.0f\n", nc);

	return 0;
}